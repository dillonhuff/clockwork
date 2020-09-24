module hcompute_padded16_global_wrapper_stencil (
    output [15:0] out_padded16_global_wrapper_stencil,
    input [15:0] in0_padded16_stencil [0:0]
);
assign out_padded16_global_wrapper_stencil = in0_padded16_stencil[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_cim_output_stencil [0:0]
);
assign out_hw_output_stencil = in0_cim_output_stencil[0];
endmodule

module cu_op_hcompute_padded16_global_wrapper_stencil (
    input clk,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0],
    output [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_padded16_global_wrapper_stencil;
wire [15:0] inner_compute_in0_padded16_stencil [0:0];
assign inner_compute_in0_padded16_stencil[0] = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
hcompute_padded16_global_wrapper_stencil inner_compute (
    .out_padded16_global_wrapper_stencil(inner_compute_out_padded16_global_wrapper_stencil),
    .in0_padded16_stencil(inner_compute_in0_padded16_stencil)
);
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = inner_compute_out_padded16_global_wrapper_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_cim_output_stencil [0:0];
assign inner_compute_in0_cim_output_stencil[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_cim_output_stencil(inner_compute_in0_cim_output_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module coreir_reg #(
    parameter width = 1,
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input [width-1:0] in,
    output [width-1:0] out
);
  reg [width-1:0] outReg=init;
  wire real_clk;
  assign real_clk = clk_posedge ? clk : ~clk;
  always @(posedge real_clk) begin
    outReg <= in;
  end
  assign out = outReg;
endmodule

module mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out
);
wire reg0_clk;
wire [15:0] reg0_in;
assign reg0_clk = clk;
assign reg0_in = in;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(reg0_clk),
    .in(reg0_in),
    .out(out)
);
endmodule

module delay__U2430 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2431_in;
wire _U2431_clk;
wire [15:0] _U2431_out;
wire [15:0] _U2432_in;
wire _U2432_clk;
wire [15:0] _U2432_out;
wire [15:0] _U2433_in;
wire _U2433_clk;
wire [15:0] _U2433_out;
wire [15:0] _U2434_in;
wire _U2434_clk;
wire [15:0] _U2434_out;
wire [15:0] _U2435_in;
wire _U2435_clk;
wire [15:0] _U2435_out;
wire [15:0] _U2436_in;
wire _U2436_clk;
wire [15:0] _U2436_out;
wire [15:0] _U2437_in;
wire _U2437_clk;
wire [15:0] _U2437_out;
wire [15:0] _U2438_in;
wire _U2438_clk;
wire [15:0] _U2438_out;
wire [15:0] _U2439_in;
wire _U2439_clk;
wire [15:0] _U2439_out;
wire [15:0] _U2440_in;
wire _U2440_clk;
wire [15:0] _U2440_out;
wire [15:0] _U2441_in;
wire _U2441_clk;
wire [15:0] _U2441_out;
wire [15:0] _U2442_in;
wire _U2442_clk;
wire [15:0] _U2442_out;
wire [15:0] _U2443_in;
wire _U2443_clk;
wire [15:0] _U2443_out;
wire [15:0] _U2444_in;
wire _U2444_clk;
wire [15:0] _U2444_out;
wire [15:0] _U2445_in;
wire _U2445_clk;
wire [15:0] _U2445_out;
wire [15:0] _U2446_in;
wire _U2446_clk;
wire [15:0] _U2446_out;
wire [15:0] _U2447_in;
wire _U2447_clk;
wire [15:0] _U2447_out;
wire [15:0] _U2448_in;
wire _U2448_clk;
wire [15:0] _U2448_out;
wire [15:0] _U2449_in;
wire _U2449_clk;
wire [15:0] _U2449_out;
wire [15:0] _U2450_in;
wire _U2450_clk;
wire [15:0] _U2450_out;
wire [15:0] _U2451_in;
wire _U2451_clk;
wire [15:0] _U2451_out;
wire [15:0] _U2452_in;
wire _U2452_clk;
wire [15:0] _U2452_out;
wire [15:0] _U2453_in;
wire _U2453_clk;
wire [15:0] _U2453_out;
wire [15:0] _U2454_in;
wire _U2454_clk;
wire [15:0] _U2454_out;
wire [15:0] _U2455_in;
wire _U2455_clk;
wire [15:0] _U2455_out;
wire [15:0] _U2456_in;
wire _U2456_clk;
wire [15:0] _U2456_out;
wire [15:0] _U2457_in;
wire _U2457_clk;
wire [15:0] _U2457_out;
wire [15:0] _U2458_in;
wire _U2458_clk;
wire [15:0] _U2458_out;
wire [15:0] _U2459_in;
wire _U2459_clk;
wire [15:0] _U2459_out;
wire [15:0] _U2460_in;
wire _U2460_clk;
wire [15:0] _U2460_out;
wire [15:0] _U2461_in;
wire _U2461_clk;
wire [15:0] _U2461_out;
wire [15:0] _U2462_in;
wire _U2462_clk;
wire [15:0] _U2462_out;
wire [15:0] _U2463_in;
wire _U2463_clk;
wire [15:0] _U2463_out;
wire [15:0] _U2464_in;
wire _U2464_clk;
wire [15:0] _U2464_out;
wire [15:0] _U2465_in;
wire _U2465_clk;
wire [15:0] _U2465_out;
wire [15:0] _U2466_in;
wire _U2466_clk;
wire [15:0] _U2466_out;
wire [15:0] _U2467_in;
wire _U2467_clk;
wire [15:0] _U2467_out;
wire [15:0] _U2468_in;
wire _U2468_clk;
wire [15:0] _U2468_out;
wire [15:0] _U2469_in;
wire _U2469_clk;
wire [15:0] _U2469_out;
wire [15:0] _U2470_in;
wire _U2470_clk;
wire [15:0] _U2470_out;
wire [15:0] _U2471_in;
wire _U2471_clk;
wire [15:0] _U2471_out;
wire [15:0] _U2472_in;
wire _U2472_clk;
wire [15:0] _U2472_out;
wire [15:0] _U2473_in;
wire _U2473_clk;
wire [15:0] _U2473_out;
wire [15:0] _U2474_in;
wire _U2474_clk;
wire [15:0] _U2474_out;
wire [15:0] _U2475_in;
wire _U2475_clk;
wire [15:0] _U2475_out;
wire [15:0] _U2476_in;
wire _U2476_clk;
wire [15:0] _U2476_out;
wire [15:0] _U2477_in;
wire _U2477_clk;
wire [15:0] _U2477_out;
wire [15:0] _U2478_in;
wire _U2478_clk;
wire [15:0] _U2478_out;
wire [15:0] _U2479_in;
wire _U2479_clk;
wire [15:0] _U2479_out;
wire [15:0] _U2480_in;
wire _U2480_clk;
wire [15:0] _U2480_out;
wire [15:0] _U2481_in;
wire _U2481_clk;
wire [15:0] _U2481_out;
wire [15:0] _U2482_in;
wire _U2482_clk;
wire [15:0] _U2482_out;
wire [15:0] _U2483_in;
wire _U2483_clk;
wire [15:0] _U2483_out;
wire [15:0] _U2484_in;
wire _U2484_clk;
wire [15:0] _U2484_out;
wire [15:0] _U2485_in;
wire _U2485_clk;
wire [15:0] _U2485_out;
wire [15:0] _U2486_in;
wire _U2486_clk;
wire [15:0] _U2486_out;
wire [15:0] _U2487_in;
wire _U2487_clk;
wire [15:0] _U2487_out;
wire [15:0] _U2488_in;
wire _U2488_clk;
wire [15:0] _U2488_out;
wire [15:0] _U2489_in;
wire _U2489_clk;
wire [15:0] _U2489_out;
wire [15:0] _U2490_in;
wire _U2490_clk;
wire [15:0] _U2490_out;
wire [15:0] _U2491_in;
wire _U2491_clk;
wire [15:0] _U2491_out;
wire [15:0] _U2492_in;
wire _U2492_clk;
assign _U2431_in = wdata;
assign _U2431_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2431 (
    .in(_U2431_in),
    .clk(_U2431_clk),
    .out(_U2431_out)
);
assign _U2432_in = _U2431_out;
assign _U2432_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2432 (
    .in(_U2432_in),
    .clk(_U2432_clk),
    .out(_U2432_out)
);
assign _U2433_in = _U2432_out;
assign _U2433_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2433 (
    .in(_U2433_in),
    .clk(_U2433_clk),
    .out(_U2433_out)
);
assign _U2434_in = _U2433_out;
assign _U2434_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2434 (
    .in(_U2434_in),
    .clk(_U2434_clk),
    .out(_U2434_out)
);
assign _U2435_in = _U2434_out;
assign _U2435_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2435 (
    .in(_U2435_in),
    .clk(_U2435_clk),
    .out(_U2435_out)
);
assign _U2436_in = _U2435_out;
assign _U2436_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2436 (
    .in(_U2436_in),
    .clk(_U2436_clk),
    .out(_U2436_out)
);
assign _U2437_in = _U2436_out;
assign _U2437_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2437 (
    .in(_U2437_in),
    .clk(_U2437_clk),
    .out(_U2437_out)
);
assign _U2438_in = _U2437_out;
assign _U2438_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2438 (
    .in(_U2438_in),
    .clk(_U2438_clk),
    .out(_U2438_out)
);
assign _U2439_in = _U2438_out;
assign _U2439_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2439 (
    .in(_U2439_in),
    .clk(_U2439_clk),
    .out(_U2439_out)
);
assign _U2440_in = _U2439_out;
assign _U2440_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2440 (
    .in(_U2440_in),
    .clk(_U2440_clk),
    .out(_U2440_out)
);
assign _U2441_in = _U2440_out;
assign _U2441_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2441 (
    .in(_U2441_in),
    .clk(_U2441_clk),
    .out(_U2441_out)
);
assign _U2442_in = _U2441_out;
assign _U2442_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2442 (
    .in(_U2442_in),
    .clk(_U2442_clk),
    .out(_U2442_out)
);
assign _U2443_in = _U2442_out;
assign _U2443_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2443 (
    .in(_U2443_in),
    .clk(_U2443_clk),
    .out(_U2443_out)
);
assign _U2444_in = _U2443_out;
assign _U2444_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2444 (
    .in(_U2444_in),
    .clk(_U2444_clk),
    .out(_U2444_out)
);
assign _U2445_in = _U2444_out;
assign _U2445_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2445 (
    .in(_U2445_in),
    .clk(_U2445_clk),
    .out(_U2445_out)
);
assign _U2446_in = _U2445_out;
assign _U2446_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2446 (
    .in(_U2446_in),
    .clk(_U2446_clk),
    .out(_U2446_out)
);
assign _U2447_in = _U2446_out;
assign _U2447_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2447 (
    .in(_U2447_in),
    .clk(_U2447_clk),
    .out(_U2447_out)
);
assign _U2448_in = _U2447_out;
assign _U2448_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2448 (
    .in(_U2448_in),
    .clk(_U2448_clk),
    .out(_U2448_out)
);
assign _U2449_in = _U2448_out;
assign _U2449_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2449 (
    .in(_U2449_in),
    .clk(_U2449_clk),
    .out(_U2449_out)
);
assign _U2450_in = _U2449_out;
assign _U2450_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2450 (
    .in(_U2450_in),
    .clk(_U2450_clk),
    .out(_U2450_out)
);
assign _U2451_in = _U2450_out;
assign _U2451_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2451 (
    .in(_U2451_in),
    .clk(_U2451_clk),
    .out(_U2451_out)
);
assign _U2452_in = _U2451_out;
assign _U2452_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2452 (
    .in(_U2452_in),
    .clk(_U2452_clk),
    .out(_U2452_out)
);
assign _U2453_in = _U2452_out;
assign _U2453_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2453 (
    .in(_U2453_in),
    .clk(_U2453_clk),
    .out(_U2453_out)
);
assign _U2454_in = _U2453_out;
assign _U2454_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2454 (
    .in(_U2454_in),
    .clk(_U2454_clk),
    .out(_U2454_out)
);
assign _U2455_in = _U2454_out;
assign _U2455_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2455 (
    .in(_U2455_in),
    .clk(_U2455_clk),
    .out(_U2455_out)
);
assign _U2456_in = _U2455_out;
assign _U2456_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2456 (
    .in(_U2456_in),
    .clk(_U2456_clk),
    .out(_U2456_out)
);
assign _U2457_in = _U2456_out;
assign _U2457_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2457 (
    .in(_U2457_in),
    .clk(_U2457_clk),
    .out(_U2457_out)
);
assign _U2458_in = _U2457_out;
assign _U2458_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2458 (
    .in(_U2458_in),
    .clk(_U2458_clk),
    .out(_U2458_out)
);
assign _U2459_in = _U2458_out;
assign _U2459_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2459 (
    .in(_U2459_in),
    .clk(_U2459_clk),
    .out(_U2459_out)
);
assign _U2460_in = _U2459_out;
assign _U2460_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2460 (
    .in(_U2460_in),
    .clk(_U2460_clk),
    .out(_U2460_out)
);
assign _U2461_in = _U2460_out;
assign _U2461_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2461 (
    .in(_U2461_in),
    .clk(_U2461_clk),
    .out(_U2461_out)
);
assign _U2462_in = _U2461_out;
assign _U2462_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2462 (
    .in(_U2462_in),
    .clk(_U2462_clk),
    .out(_U2462_out)
);
assign _U2463_in = _U2462_out;
assign _U2463_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2463 (
    .in(_U2463_in),
    .clk(_U2463_clk),
    .out(_U2463_out)
);
assign _U2464_in = _U2463_out;
assign _U2464_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2464 (
    .in(_U2464_in),
    .clk(_U2464_clk),
    .out(_U2464_out)
);
assign _U2465_in = _U2464_out;
assign _U2465_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2465 (
    .in(_U2465_in),
    .clk(_U2465_clk),
    .out(_U2465_out)
);
assign _U2466_in = _U2465_out;
assign _U2466_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2466 (
    .in(_U2466_in),
    .clk(_U2466_clk),
    .out(_U2466_out)
);
assign _U2467_in = _U2466_out;
assign _U2467_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2467 (
    .in(_U2467_in),
    .clk(_U2467_clk),
    .out(_U2467_out)
);
assign _U2468_in = _U2467_out;
assign _U2468_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2468 (
    .in(_U2468_in),
    .clk(_U2468_clk),
    .out(_U2468_out)
);
assign _U2469_in = _U2468_out;
assign _U2469_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2469 (
    .in(_U2469_in),
    .clk(_U2469_clk),
    .out(_U2469_out)
);
assign _U2470_in = _U2469_out;
assign _U2470_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2470 (
    .in(_U2470_in),
    .clk(_U2470_clk),
    .out(_U2470_out)
);
assign _U2471_in = _U2470_out;
assign _U2471_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2471 (
    .in(_U2471_in),
    .clk(_U2471_clk),
    .out(_U2471_out)
);
assign _U2472_in = _U2471_out;
assign _U2472_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2472 (
    .in(_U2472_in),
    .clk(_U2472_clk),
    .out(_U2472_out)
);
assign _U2473_in = _U2472_out;
assign _U2473_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2473 (
    .in(_U2473_in),
    .clk(_U2473_clk),
    .out(_U2473_out)
);
assign _U2474_in = _U2473_out;
assign _U2474_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2474 (
    .in(_U2474_in),
    .clk(_U2474_clk),
    .out(_U2474_out)
);
assign _U2475_in = _U2474_out;
assign _U2475_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2475 (
    .in(_U2475_in),
    .clk(_U2475_clk),
    .out(_U2475_out)
);
assign _U2476_in = _U2475_out;
assign _U2476_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2476 (
    .in(_U2476_in),
    .clk(_U2476_clk),
    .out(_U2476_out)
);
assign _U2477_in = _U2476_out;
assign _U2477_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2477 (
    .in(_U2477_in),
    .clk(_U2477_clk),
    .out(_U2477_out)
);
assign _U2478_in = _U2477_out;
assign _U2478_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2478 (
    .in(_U2478_in),
    .clk(_U2478_clk),
    .out(_U2478_out)
);
assign _U2479_in = _U2478_out;
assign _U2479_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2479 (
    .in(_U2479_in),
    .clk(_U2479_clk),
    .out(_U2479_out)
);
assign _U2480_in = _U2479_out;
assign _U2480_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2480 (
    .in(_U2480_in),
    .clk(_U2480_clk),
    .out(_U2480_out)
);
assign _U2481_in = _U2480_out;
assign _U2481_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2481 (
    .in(_U2481_in),
    .clk(_U2481_clk),
    .out(_U2481_out)
);
assign _U2482_in = _U2481_out;
assign _U2482_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2482 (
    .in(_U2482_in),
    .clk(_U2482_clk),
    .out(_U2482_out)
);
assign _U2483_in = _U2482_out;
assign _U2483_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2483 (
    .in(_U2483_in),
    .clk(_U2483_clk),
    .out(_U2483_out)
);
assign _U2484_in = _U2483_out;
assign _U2484_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2484 (
    .in(_U2484_in),
    .clk(_U2484_clk),
    .out(_U2484_out)
);
assign _U2485_in = _U2484_out;
assign _U2485_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2485 (
    .in(_U2485_in),
    .clk(_U2485_clk),
    .out(_U2485_out)
);
assign _U2486_in = _U2485_out;
assign _U2486_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2486 (
    .in(_U2486_in),
    .clk(_U2486_clk),
    .out(_U2486_out)
);
assign _U2487_in = _U2486_out;
assign _U2487_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2487 (
    .in(_U2487_in),
    .clk(_U2487_clk),
    .out(_U2487_out)
);
assign _U2488_in = _U2487_out;
assign _U2488_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2488 (
    .in(_U2488_in),
    .clk(_U2488_clk),
    .out(_U2488_out)
);
assign _U2489_in = _U2488_out;
assign _U2489_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2489 (
    .in(_U2489_in),
    .clk(_U2489_clk),
    .out(_U2489_out)
);
assign _U2490_in = _U2489_out;
assign _U2490_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2490 (
    .in(_U2490_in),
    .clk(_U2490_clk),
    .out(_U2490_out)
);
assign _U2491_in = _U2490_out;
assign _U2491_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2491 (
    .in(_U2491_in),
    .clk(_U2491_clk),
    .out(_U2491_out)
);
assign _U2492_in = _U2491_out;
assign _U2492_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2492 (
    .in(_U2492_in),
    .clk(_U2492_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay62 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U2430 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2294 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2263 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2255 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2232 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2224 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2201 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2193 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2129 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2121 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2382 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2383_in;
wire _U2383_clk;
wire [15:0] _U2383_out;
wire [15:0] _U2384_in;
wire _U2384_clk;
wire [15:0] _U2384_out;
wire [15:0] _U2385_in;
wire _U2385_clk;
wire [15:0] _U2385_out;
wire [15:0] _U2386_in;
wire _U2386_clk;
wire [15:0] _U2386_out;
wire [15:0] _U2387_in;
wire _U2387_clk;
wire [15:0] _U2387_out;
wire [15:0] _U2388_in;
wire _U2388_clk;
wire [15:0] _U2388_out;
wire [15:0] _U2389_in;
wire _U2389_clk;
wire [15:0] _U2389_out;
wire [15:0] _U2390_in;
wire _U2390_clk;
wire [15:0] _U2390_out;
wire [15:0] _U2391_in;
wire _U2391_clk;
wire [15:0] _U2391_out;
wire [15:0] _U2392_in;
wire _U2392_clk;
wire [15:0] _U2392_out;
wire [15:0] _U2393_in;
wire _U2393_clk;
wire [15:0] _U2393_out;
wire [15:0] _U2394_in;
wire _U2394_clk;
wire [15:0] _U2394_out;
wire [15:0] _U2395_in;
wire _U2395_clk;
wire [15:0] _U2395_out;
wire [15:0] _U2396_in;
wire _U2396_clk;
wire [15:0] _U2396_out;
wire [15:0] _U2397_in;
wire _U2397_clk;
wire [15:0] _U2397_out;
wire [15:0] _U2398_in;
wire _U2398_clk;
wire [15:0] _U2398_out;
wire [15:0] _U2399_in;
wire _U2399_clk;
wire [15:0] _U2399_out;
wire [15:0] _U2400_in;
wire _U2400_clk;
wire [15:0] _U2400_out;
wire [15:0] _U2401_in;
wire _U2401_clk;
wire [15:0] _U2401_out;
wire [15:0] _U2402_in;
wire _U2402_clk;
wire [15:0] _U2402_out;
wire [15:0] _U2403_in;
wire _U2403_clk;
wire [15:0] _U2403_out;
wire [15:0] _U2404_in;
wire _U2404_clk;
wire [15:0] _U2404_out;
wire [15:0] _U2405_in;
wire _U2405_clk;
wire [15:0] _U2405_out;
wire [15:0] _U2406_in;
wire _U2406_clk;
wire [15:0] _U2406_out;
wire [15:0] _U2407_in;
wire _U2407_clk;
wire [15:0] _U2407_out;
wire [15:0] _U2408_in;
wire _U2408_clk;
wire [15:0] _U2408_out;
wire [15:0] _U2409_in;
wire _U2409_clk;
wire [15:0] _U2409_out;
wire [15:0] _U2410_in;
wire _U2410_clk;
wire [15:0] _U2410_out;
wire [15:0] _U2411_in;
wire _U2411_clk;
wire [15:0] _U2411_out;
wire [15:0] _U2412_in;
wire _U2412_clk;
wire [15:0] _U2412_out;
wire [15:0] _U2413_in;
wire _U2413_clk;
wire [15:0] _U2413_out;
wire [15:0] _U2414_in;
wire _U2414_clk;
wire [15:0] _U2414_out;
wire [15:0] _U2415_in;
wire _U2415_clk;
wire [15:0] _U2415_out;
wire [15:0] _U2416_in;
wire _U2416_clk;
wire [15:0] _U2416_out;
wire [15:0] _U2417_in;
wire _U2417_clk;
wire [15:0] _U2417_out;
wire [15:0] _U2418_in;
wire _U2418_clk;
wire [15:0] _U2418_out;
wire [15:0] _U2419_in;
wire _U2419_clk;
wire [15:0] _U2419_out;
wire [15:0] _U2420_in;
wire _U2420_clk;
wire [15:0] _U2420_out;
wire [15:0] _U2421_in;
wire _U2421_clk;
wire [15:0] _U2421_out;
wire [15:0] _U2422_in;
wire _U2422_clk;
wire [15:0] _U2422_out;
wire [15:0] _U2423_in;
wire _U2423_clk;
wire [15:0] _U2423_out;
wire [15:0] _U2424_in;
wire _U2424_clk;
wire [15:0] _U2424_out;
wire [15:0] _U2425_in;
wire _U2425_clk;
wire [15:0] _U2425_out;
wire [15:0] _U2426_in;
wire _U2426_clk;
wire [15:0] _U2426_out;
wire [15:0] _U2427_in;
wire _U2427_clk;
wire [15:0] _U2427_out;
wire [15:0] _U2428_in;
wire _U2428_clk;
wire [15:0] _U2428_out;
wire [15:0] _U2429_in;
wire _U2429_clk;
assign _U2383_in = wdata;
assign _U2383_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2383 (
    .in(_U2383_in),
    .clk(_U2383_clk),
    .out(_U2383_out)
);
assign _U2384_in = _U2383_out;
assign _U2384_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2384 (
    .in(_U2384_in),
    .clk(_U2384_clk),
    .out(_U2384_out)
);
assign _U2385_in = _U2384_out;
assign _U2385_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2385 (
    .in(_U2385_in),
    .clk(_U2385_clk),
    .out(_U2385_out)
);
assign _U2386_in = _U2385_out;
assign _U2386_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2386 (
    .in(_U2386_in),
    .clk(_U2386_clk),
    .out(_U2386_out)
);
assign _U2387_in = _U2386_out;
assign _U2387_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2387 (
    .in(_U2387_in),
    .clk(_U2387_clk),
    .out(_U2387_out)
);
assign _U2388_in = _U2387_out;
assign _U2388_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2388 (
    .in(_U2388_in),
    .clk(_U2388_clk),
    .out(_U2388_out)
);
assign _U2389_in = _U2388_out;
assign _U2389_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2389 (
    .in(_U2389_in),
    .clk(_U2389_clk),
    .out(_U2389_out)
);
assign _U2390_in = _U2389_out;
assign _U2390_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2390 (
    .in(_U2390_in),
    .clk(_U2390_clk),
    .out(_U2390_out)
);
assign _U2391_in = _U2390_out;
assign _U2391_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2391 (
    .in(_U2391_in),
    .clk(_U2391_clk),
    .out(_U2391_out)
);
assign _U2392_in = _U2391_out;
assign _U2392_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2392 (
    .in(_U2392_in),
    .clk(_U2392_clk),
    .out(_U2392_out)
);
assign _U2393_in = _U2392_out;
assign _U2393_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2393 (
    .in(_U2393_in),
    .clk(_U2393_clk),
    .out(_U2393_out)
);
assign _U2394_in = _U2393_out;
assign _U2394_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2394 (
    .in(_U2394_in),
    .clk(_U2394_clk),
    .out(_U2394_out)
);
assign _U2395_in = _U2394_out;
assign _U2395_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2395 (
    .in(_U2395_in),
    .clk(_U2395_clk),
    .out(_U2395_out)
);
assign _U2396_in = _U2395_out;
assign _U2396_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2396 (
    .in(_U2396_in),
    .clk(_U2396_clk),
    .out(_U2396_out)
);
assign _U2397_in = _U2396_out;
assign _U2397_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2397 (
    .in(_U2397_in),
    .clk(_U2397_clk),
    .out(_U2397_out)
);
assign _U2398_in = _U2397_out;
assign _U2398_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2398 (
    .in(_U2398_in),
    .clk(_U2398_clk),
    .out(_U2398_out)
);
assign _U2399_in = _U2398_out;
assign _U2399_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2399 (
    .in(_U2399_in),
    .clk(_U2399_clk),
    .out(_U2399_out)
);
assign _U2400_in = _U2399_out;
assign _U2400_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2400 (
    .in(_U2400_in),
    .clk(_U2400_clk),
    .out(_U2400_out)
);
assign _U2401_in = _U2400_out;
assign _U2401_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2401 (
    .in(_U2401_in),
    .clk(_U2401_clk),
    .out(_U2401_out)
);
assign _U2402_in = _U2401_out;
assign _U2402_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2402 (
    .in(_U2402_in),
    .clk(_U2402_clk),
    .out(_U2402_out)
);
assign _U2403_in = _U2402_out;
assign _U2403_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2403 (
    .in(_U2403_in),
    .clk(_U2403_clk),
    .out(_U2403_out)
);
assign _U2404_in = _U2403_out;
assign _U2404_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2404 (
    .in(_U2404_in),
    .clk(_U2404_clk),
    .out(_U2404_out)
);
assign _U2405_in = _U2404_out;
assign _U2405_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2405 (
    .in(_U2405_in),
    .clk(_U2405_clk),
    .out(_U2405_out)
);
assign _U2406_in = _U2405_out;
assign _U2406_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2406 (
    .in(_U2406_in),
    .clk(_U2406_clk),
    .out(_U2406_out)
);
assign _U2407_in = _U2406_out;
assign _U2407_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2407 (
    .in(_U2407_in),
    .clk(_U2407_clk),
    .out(_U2407_out)
);
assign _U2408_in = _U2407_out;
assign _U2408_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2408 (
    .in(_U2408_in),
    .clk(_U2408_clk),
    .out(_U2408_out)
);
assign _U2409_in = _U2408_out;
assign _U2409_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2409 (
    .in(_U2409_in),
    .clk(_U2409_clk),
    .out(_U2409_out)
);
assign _U2410_in = _U2409_out;
assign _U2410_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2410 (
    .in(_U2410_in),
    .clk(_U2410_clk),
    .out(_U2410_out)
);
assign _U2411_in = _U2410_out;
assign _U2411_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2411 (
    .in(_U2411_in),
    .clk(_U2411_clk),
    .out(_U2411_out)
);
assign _U2412_in = _U2411_out;
assign _U2412_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2412 (
    .in(_U2412_in),
    .clk(_U2412_clk),
    .out(_U2412_out)
);
assign _U2413_in = _U2412_out;
assign _U2413_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2413 (
    .in(_U2413_in),
    .clk(_U2413_clk),
    .out(_U2413_out)
);
assign _U2414_in = _U2413_out;
assign _U2414_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2414 (
    .in(_U2414_in),
    .clk(_U2414_clk),
    .out(_U2414_out)
);
assign _U2415_in = _U2414_out;
assign _U2415_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2415 (
    .in(_U2415_in),
    .clk(_U2415_clk),
    .out(_U2415_out)
);
assign _U2416_in = _U2415_out;
assign _U2416_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2416 (
    .in(_U2416_in),
    .clk(_U2416_clk),
    .out(_U2416_out)
);
assign _U2417_in = _U2416_out;
assign _U2417_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2417 (
    .in(_U2417_in),
    .clk(_U2417_clk),
    .out(_U2417_out)
);
assign _U2418_in = _U2417_out;
assign _U2418_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2418 (
    .in(_U2418_in),
    .clk(_U2418_clk),
    .out(_U2418_out)
);
assign _U2419_in = _U2418_out;
assign _U2419_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2419 (
    .in(_U2419_in),
    .clk(_U2419_clk),
    .out(_U2419_out)
);
assign _U2420_in = _U2419_out;
assign _U2420_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2420 (
    .in(_U2420_in),
    .clk(_U2420_clk),
    .out(_U2420_out)
);
assign _U2421_in = _U2420_out;
assign _U2421_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2421 (
    .in(_U2421_in),
    .clk(_U2421_clk),
    .out(_U2421_out)
);
assign _U2422_in = _U2421_out;
assign _U2422_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2422 (
    .in(_U2422_in),
    .clk(_U2422_clk),
    .out(_U2422_out)
);
assign _U2423_in = _U2422_out;
assign _U2423_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2423 (
    .in(_U2423_in),
    .clk(_U2423_clk),
    .out(_U2423_out)
);
assign _U2424_in = _U2423_out;
assign _U2424_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2424 (
    .in(_U2424_in),
    .clk(_U2424_clk),
    .out(_U2424_out)
);
assign _U2425_in = _U2424_out;
assign _U2425_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2425 (
    .in(_U2425_in),
    .clk(_U2425_clk),
    .out(_U2425_out)
);
assign _U2426_in = _U2425_out;
assign _U2426_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2426 (
    .in(_U2426_in),
    .clk(_U2426_clk),
    .out(_U2426_out)
);
assign _U2427_in = _U2426_out;
assign _U2427_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2427 (
    .in(_U2427_in),
    .clk(_U2427_clk),
    .out(_U2427_out)
);
assign _U2428_in = _U2427_out;
assign _U2428_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2428 (
    .in(_U2428_in),
    .clk(_U2428_clk),
    .out(_U2428_out)
);
assign _U2429_in = _U2428_out;
assign _U2429_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2429 (
    .in(_U2429_in),
    .clk(_U2429_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay47 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U2382 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2288 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay47 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2351 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2352_in;
wire _U2352_clk;
wire [15:0] _U2352_out;
wire [15:0] _U2353_in;
wire _U2353_clk;
wire [15:0] _U2353_out;
wire [15:0] _U2354_in;
wire _U2354_clk;
wire [15:0] _U2354_out;
wire [15:0] _U2355_in;
wire _U2355_clk;
wire [15:0] _U2355_out;
wire [15:0] _U2356_in;
wire _U2356_clk;
wire [15:0] _U2356_out;
wire [15:0] _U2357_in;
wire _U2357_clk;
wire [15:0] _U2357_out;
wire [15:0] _U2358_in;
wire _U2358_clk;
wire [15:0] _U2358_out;
wire [15:0] _U2359_in;
wire _U2359_clk;
wire [15:0] _U2359_out;
wire [15:0] _U2360_in;
wire _U2360_clk;
wire [15:0] _U2360_out;
wire [15:0] _U2361_in;
wire _U2361_clk;
wire [15:0] _U2361_out;
wire [15:0] _U2362_in;
wire _U2362_clk;
wire [15:0] _U2362_out;
wire [15:0] _U2363_in;
wire _U2363_clk;
wire [15:0] _U2363_out;
wire [15:0] _U2364_in;
wire _U2364_clk;
wire [15:0] _U2364_out;
wire [15:0] _U2365_in;
wire _U2365_clk;
wire [15:0] _U2365_out;
wire [15:0] _U2366_in;
wire _U2366_clk;
wire [15:0] _U2366_out;
wire [15:0] _U2367_in;
wire _U2367_clk;
wire [15:0] _U2367_out;
wire [15:0] _U2368_in;
wire _U2368_clk;
wire [15:0] _U2368_out;
wire [15:0] _U2369_in;
wire _U2369_clk;
wire [15:0] _U2369_out;
wire [15:0] _U2370_in;
wire _U2370_clk;
wire [15:0] _U2370_out;
wire [15:0] _U2371_in;
wire _U2371_clk;
wire [15:0] _U2371_out;
wire [15:0] _U2372_in;
wire _U2372_clk;
wire [15:0] _U2372_out;
wire [15:0] _U2373_in;
wire _U2373_clk;
wire [15:0] _U2373_out;
wire [15:0] _U2374_in;
wire _U2374_clk;
wire [15:0] _U2374_out;
wire [15:0] _U2375_in;
wire _U2375_clk;
wire [15:0] _U2375_out;
wire [15:0] _U2376_in;
wire _U2376_clk;
wire [15:0] _U2376_out;
wire [15:0] _U2377_in;
wire _U2377_clk;
wire [15:0] _U2377_out;
wire [15:0] _U2378_in;
wire _U2378_clk;
wire [15:0] _U2378_out;
wire [15:0] _U2379_in;
wire _U2379_clk;
wire [15:0] _U2379_out;
wire [15:0] _U2380_in;
wire _U2380_clk;
wire [15:0] _U2380_out;
wire [15:0] _U2381_in;
wire _U2381_clk;
assign _U2352_in = wdata;
assign _U2352_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2352 (
    .in(_U2352_in),
    .clk(_U2352_clk),
    .out(_U2352_out)
);
assign _U2353_in = _U2352_out;
assign _U2353_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2353 (
    .in(_U2353_in),
    .clk(_U2353_clk),
    .out(_U2353_out)
);
assign _U2354_in = _U2353_out;
assign _U2354_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2354 (
    .in(_U2354_in),
    .clk(_U2354_clk),
    .out(_U2354_out)
);
assign _U2355_in = _U2354_out;
assign _U2355_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2355 (
    .in(_U2355_in),
    .clk(_U2355_clk),
    .out(_U2355_out)
);
assign _U2356_in = _U2355_out;
assign _U2356_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2356 (
    .in(_U2356_in),
    .clk(_U2356_clk),
    .out(_U2356_out)
);
assign _U2357_in = _U2356_out;
assign _U2357_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2357 (
    .in(_U2357_in),
    .clk(_U2357_clk),
    .out(_U2357_out)
);
assign _U2358_in = _U2357_out;
assign _U2358_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2358 (
    .in(_U2358_in),
    .clk(_U2358_clk),
    .out(_U2358_out)
);
assign _U2359_in = _U2358_out;
assign _U2359_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2359 (
    .in(_U2359_in),
    .clk(_U2359_clk),
    .out(_U2359_out)
);
assign _U2360_in = _U2359_out;
assign _U2360_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2360 (
    .in(_U2360_in),
    .clk(_U2360_clk),
    .out(_U2360_out)
);
assign _U2361_in = _U2360_out;
assign _U2361_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2361 (
    .in(_U2361_in),
    .clk(_U2361_clk),
    .out(_U2361_out)
);
assign _U2362_in = _U2361_out;
assign _U2362_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2362 (
    .in(_U2362_in),
    .clk(_U2362_clk),
    .out(_U2362_out)
);
assign _U2363_in = _U2362_out;
assign _U2363_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2363 (
    .in(_U2363_in),
    .clk(_U2363_clk),
    .out(_U2363_out)
);
assign _U2364_in = _U2363_out;
assign _U2364_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2364 (
    .in(_U2364_in),
    .clk(_U2364_clk),
    .out(_U2364_out)
);
assign _U2365_in = _U2364_out;
assign _U2365_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2365 (
    .in(_U2365_in),
    .clk(_U2365_clk),
    .out(_U2365_out)
);
assign _U2366_in = _U2365_out;
assign _U2366_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2366 (
    .in(_U2366_in),
    .clk(_U2366_clk),
    .out(_U2366_out)
);
assign _U2367_in = _U2366_out;
assign _U2367_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2367 (
    .in(_U2367_in),
    .clk(_U2367_clk),
    .out(_U2367_out)
);
assign _U2368_in = _U2367_out;
assign _U2368_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2368 (
    .in(_U2368_in),
    .clk(_U2368_clk),
    .out(_U2368_out)
);
assign _U2369_in = _U2368_out;
assign _U2369_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2369 (
    .in(_U2369_in),
    .clk(_U2369_clk),
    .out(_U2369_out)
);
assign _U2370_in = _U2369_out;
assign _U2370_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2370 (
    .in(_U2370_in),
    .clk(_U2370_clk),
    .out(_U2370_out)
);
assign _U2371_in = _U2370_out;
assign _U2371_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2371 (
    .in(_U2371_in),
    .clk(_U2371_clk),
    .out(_U2371_out)
);
assign _U2372_in = _U2371_out;
assign _U2372_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2372 (
    .in(_U2372_in),
    .clk(_U2372_clk),
    .out(_U2372_out)
);
assign _U2373_in = _U2372_out;
assign _U2373_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2373 (
    .in(_U2373_in),
    .clk(_U2373_clk),
    .out(_U2373_out)
);
assign _U2374_in = _U2373_out;
assign _U2374_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2374 (
    .in(_U2374_in),
    .clk(_U2374_clk),
    .out(_U2374_out)
);
assign _U2375_in = _U2374_out;
assign _U2375_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2375 (
    .in(_U2375_in),
    .clk(_U2375_clk),
    .out(_U2375_out)
);
assign _U2376_in = _U2375_out;
assign _U2376_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2376 (
    .in(_U2376_in),
    .clk(_U2376_clk),
    .out(_U2376_out)
);
assign _U2377_in = _U2376_out;
assign _U2377_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2377 (
    .in(_U2377_in),
    .clk(_U2377_clk),
    .out(_U2377_out)
);
assign _U2378_in = _U2377_out;
assign _U2378_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2378 (
    .in(_U2378_in),
    .clk(_U2378_clk),
    .out(_U2378_out)
);
assign _U2379_in = _U2378_out;
assign _U2379_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2379 (
    .in(_U2379_in),
    .clk(_U2379_clk),
    .out(_U2379_out)
);
assign _U2380_in = _U2379_out;
assign _U2380_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2380 (
    .in(_U2380_in),
    .clk(_U2380_clk),
    .out(_U2380_out)
);
assign _U2381_in = _U2380_out;
assign _U2381_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2381 (
    .in(_U2381_in),
    .clk(_U2381_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay30 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U2351 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2153 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay30 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module lgxx_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgxx_stencil_1_write_wen,
    input [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxx_stencil_1_write [0:0]
);
wire delay_sr_U2154_clk;
wire [15:0] delay_sr_U2154_wdata;
wire [15:0] delay_sr_U2154_rdata;
wire delay_sr_U2154_rst_n;
wire delay_sr_U2154_flush;
assign delay_sr_U2154_clk = clk;
assign delay_sr_U2154_wdata = op_hcompute_lgxx_stencil_1_write[0];
assign delay_sr_U2154_rst_n = rst_n;
assign delay_sr_U2154_flush = flush;
memtile_long_delay__U2153 delay_sr_U2154 (
    .clk(delay_sr_U2154_clk),
    .wdata(delay_sr_U2154_wdata),
    .rdata(delay_sr_U2154_rdata),
    .rst_n(delay_sr_U2154_rst_n),
    .flush(delay_sr_U2154_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U2154_rdata;
endmodule

module delay__U2335 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2336_in;
wire _U2336_clk;
wire [15:0] _U2336_out;
wire [15:0] _U2337_in;
wire _U2337_clk;
wire [15:0] _U2337_out;
wire [15:0] _U2338_in;
wire _U2338_clk;
wire [15:0] _U2338_out;
wire [15:0] _U2339_in;
wire _U2339_clk;
wire [15:0] _U2339_out;
wire [15:0] _U2340_in;
wire _U2340_clk;
wire [15:0] _U2340_out;
wire [15:0] _U2341_in;
wire _U2341_clk;
wire [15:0] _U2341_out;
wire [15:0] _U2342_in;
wire _U2342_clk;
wire [15:0] _U2342_out;
wire [15:0] _U2343_in;
wire _U2343_clk;
wire [15:0] _U2343_out;
wire [15:0] _U2344_in;
wire _U2344_clk;
wire [15:0] _U2344_out;
wire [15:0] _U2345_in;
wire _U2345_clk;
wire [15:0] _U2345_out;
wire [15:0] _U2346_in;
wire _U2346_clk;
wire [15:0] _U2346_out;
wire [15:0] _U2347_in;
wire _U2347_clk;
wire [15:0] _U2347_out;
wire [15:0] _U2348_in;
wire _U2348_clk;
wire [15:0] _U2348_out;
wire [15:0] _U2349_in;
wire _U2349_clk;
wire [15:0] _U2349_out;
wire [15:0] _U2350_in;
wire _U2350_clk;
assign _U2336_in = wdata;
assign _U2336_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2336 (
    .in(_U2336_in),
    .clk(_U2336_clk),
    .out(_U2336_out)
);
assign _U2337_in = _U2336_out;
assign _U2337_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2337 (
    .in(_U2337_in),
    .clk(_U2337_clk),
    .out(_U2337_out)
);
assign _U2338_in = _U2337_out;
assign _U2338_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2338 (
    .in(_U2338_in),
    .clk(_U2338_clk),
    .out(_U2338_out)
);
assign _U2339_in = _U2338_out;
assign _U2339_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2339 (
    .in(_U2339_in),
    .clk(_U2339_clk),
    .out(_U2339_out)
);
assign _U2340_in = _U2339_out;
assign _U2340_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2340 (
    .in(_U2340_in),
    .clk(_U2340_clk),
    .out(_U2340_out)
);
assign _U2341_in = _U2340_out;
assign _U2341_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2341 (
    .in(_U2341_in),
    .clk(_U2341_clk),
    .out(_U2341_out)
);
assign _U2342_in = _U2341_out;
assign _U2342_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2342 (
    .in(_U2342_in),
    .clk(_U2342_clk),
    .out(_U2342_out)
);
assign _U2343_in = _U2342_out;
assign _U2343_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2343 (
    .in(_U2343_in),
    .clk(_U2343_clk),
    .out(_U2343_out)
);
assign _U2344_in = _U2343_out;
assign _U2344_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2344 (
    .in(_U2344_in),
    .clk(_U2344_clk),
    .out(_U2344_out)
);
assign _U2345_in = _U2344_out;
assign _U2345_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2345 (
    .in(_U2345_in),
    .clk(_U2345_clk),
    .out(_U2345_out)
);
assign _U2346_in = _U2345_out;
assign _U2346_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2346 (
    .in(_U2346_in),
    .clk(_U2346_clk),
    .out(_U2346_out)
);
assign _U2347_in = _U2346_out;
assign _U2347_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2347 (
    .in(_U2347_in),
    .clk(_U2347_clk),
    .out(_U2347_out)
);
assign _U2348_in = _U2347_out;
assign _U2348_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2348 (
    .in(_U2348_in),
    .clk(_U2348_clk),
    .out(_U2348_out)
);
assign _U2349_in = _U2348_out;
assign _U2349_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2349 (
    .in(_U2349_in),
    .clk(_U2349_clk),
    .out(_U2349_out)
);
assign _U2350_in = _U2349_out;
assign _U2350_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2350 (
    .in(_U2350_in),
    .clk(_U2350_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay15 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U2335 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2160 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay15 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module lgxy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgxy_stencil_1_write_wen,
    input [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxy_stencil_1_write [0:0]
);
wire delay_sr_U2161_clk;
wire [15:0] delay_sr_U2161_wdata;
wire [15:0] delay_sr_U2161_rdata;
wire delay_sr_U2161_rst_n;
wire delay_sr_U2161_flush;
assign delay_sr_U2161_clk = clk;
assign delay_sr_U2161_wdata = op_hcompute_lgxy_stencil_1_write[0];
assign delay_sr_U2161_rst_n = rst_n;
assign delay_sr_U2161_flush = flush;
memtile_long_delay__U2160 delay_sr_U2161 (
    .clk(delay_sr_U2161_clk),
    .wdata(delay_sr_U2161_wdata),
    .rdata(delay_sr_U2161_rdata),
    .rst_n(delay_sr_U2161_rst_n),
    .flush(delay_sr_U2161_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U2161_rdata;
endmodule

module memtile_long_delay__U2143 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay15 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2321 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2322_in;
wire _U2322_clk;
wire [15:0] _U2322_out;
wire [15:0] _U2323_in;
wire _U2323_clk;
wire [15:0] _U2323_out;
wire [15:0] _U2324_in;
wire _U2324_clk;
wire [15:0] _U2324_out;
wire [15:0] _U2325_in;
wire _U2325_clk;
wire [15:0] _U2325_out;
wire [15:0] _U2326_in;
wire _U2326_clk;
wire [15:0] _U2326_out;
wire [15:0] _U2327_in;
wire _U2327_clk;
wire [15:0] _U2327_out;
wire [15:0] _U2328_in;
wire _U2328_clk;
wire [15:0] _U2328_out;
wire [15:0] _U2329_in;
wire _U2329_clk;
wire [15:0] _U2329_out;
wire [15:0] _U2330_in;
wire _U2330_clk;
wire [15:0] _U2330_out;
wire [15:0] _U2331_in;
wire _U2331_clk;
wire [15:0] _U2331_out;
wire [15:0] _U2332_in;
wire _U2332_clk;
wire [15:0] _U2332_out;
wire [15:0] _U2333_in;
wire _U2333_clk;
wire [15:0] _U2333_out;
wire [15:0] _U2334_in;
wire _U2334_clk;
assign _U2322_in = wdata;
assign _U2322_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2322 (
    .in(_U2322_in),
    .clk(_U2322_clk),
    .out(_U2322_out)
);
assign _U2323_in = _U2322_out;
assign _U2323_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2323 (
    .in(_U2323_in),
    .clk(_U2323_clk),
    .out(_U2323_out)
);
assign _U2324_in = _U2323_out;
assign _U2324_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2324 (
    .in(_U2324_in),
    .clk(_U2324_clk),
    .out(_U2324_out)
);
assign _U2325_in = _U2324_out;
assign _U2325_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2325 (
    .in(_U2325_in),
    .clk(_U2325_clk),
    .out(_U2325_out)
);
assign _U2326_in = _U2325_out;
assign _U2326_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2326 (
    .in(_U2326_in),
    .clk(_U2326_clk),
    .out(_U2326_out)
);
assign _U2327_in = _U2326_out;
assign _U2327_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2327 (
    .in(_U2327_in),
    .clk(_U2327_clk),
    .out(_U2327_out)
);
assign _U2328_in = _U2327_out;
assign _U2328_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2328 (
    .in(_U2328_in),
    .clk(_U2328_clk),
    .out(_U2328_out)
);
assign _U2329_in = _U2328_out;
assign _U2329_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2329 (
    .in(_U2329_in),
    .clk(_U2329_clk),
    .out(_U2329_out)
);
assign _U2330_in = _U2329_out;
assign _U2330_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2330 (
    .in(_U2330_in),
    .clk(_U2330_clk),
    .out(_U2330_out)
);
assign _U2331_in = _U2330_out;
assign _U2331_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2331 (
    .in(_U2331_in),
    .clk(_U2331_clk),
    .out(_U2331_out)
);
assign _U2332_in = _U2331_out;
assign _U2332_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2332 (
    .in(_U2332_in),
    .clk(_U2332_clk),
    .out(_U2332_out)
);
assign _U2333_in = _U2332_out;
assign _U2333_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2333 (
    .in(_U2333_in),
    .clk(_U2333_clk),
    .out(_U2333_out)
);
assign _U2334_in = _U2333_out;
assign _U2334_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2334 (
    .in(_U2334_in),
    .clk(_U2334_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay13 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U2321 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2300 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay13 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2280 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay13 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2309 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2310_in;
wire _U2310_clk;
wire [15:0] _U2310_out;
wire [15:0] _U2311_in;
wire _U2311_clk;
wire [15:0] _U2311_out;
wire [15:0] _U2312_in;
wire _U2312_clk;
wire [15:0] _U2312_out;
wire [15:0] _U2313_in;
wire _U2313_clk;
wire [15:0] _U2313_out;
wire [15:0] _U2314_in;
wire _U2314_clk;
wire [15:0] _U2314_out;
wire [15:0] _U2315_in;
wire _U2315_clk;
wire [15:0] _U2315_out;
wire [15:0] _U2316_in;
wire _U2316_clk;
wire [15:0] _U2316_out;
wire [15:0] _U2317_in;
wire _U2317_clk;
wire [15:0] _U2317_out;
wire [15:0] _U2318_in;
wire _U2318_clk;
wire [15:0] _U2318_out;
wire [15:0] _U2319_in;
wire _U2319_clk;
wire [15:0] _U2319_out;
wire [15:0] _U2320_in;
wire _U2320_clk;
assign _U2310_in = wdata;
assign _U2310_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2310 (
    .in(_U2310_in),
    .clk(_U2310_clk),
    .out(_U2310_out)
);
assign _U2311_in = _U2310_out;
assign _U2311_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2311 (
    .in(_U2311_in),
    .clk(_U2311_clk),
    .out(_U2311_out)
);
assign _U2312_in = _U2311_out;
assign _U2312_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2312 (
    .in(_U2312_in),
    .clk(_U2312_clk),
    .out(_U2312_out)
);
assign _U2313_in = _U2312_out;
assign _U2313_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2313 (
    .in(_U2313_in),
    .clk(_U2313_clk),
    .out(_U2313_out)
);
assign _U2314_in = _U2313_out;
assign _U2314_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2314 (
    .in(_U2314_in),
    .clk(_U2314_clk),
    .out(_U2314_out)
);
assign _U2315_in = _U2314_out;
assign _U2315_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2315 (
    .in(_U2315_in),
    .clk(_U2315_clk),
    .out(_U2315_out)
);
assign _U2316_in = _U2315_out;
assign _U2316_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2316 (
    .in(_U2316_in),
    .clk(_U2316_clk),
    .out(_U2316_out)
);
assign _U2317_in = _U2316_out;
assign _U2317_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2317 (
    .in(_U2317_in),
    .clk(_U2317_clk),
    .out(_U2317_out)
);
assign _U2318_in = _U2317_out;
assign _U2318_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2318 (
    .in(_U2318_in),
    .clk(_U2318_clk),
    .out(_U2318_out)
);
assign _U2319_in = _U2318_out;
assign _U2319_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2319 (
    .in(_U2319_in),
    .clk(_U2319_clk),
    .out(_U2319_out)
);
assign _U2320_in = _U2319_out;
assign _U2320_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2320 (
    .in(_U2320_in),
    .clk(_U2320_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay11 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U2309 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2151 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay11 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2305 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2306_in;
wire _U2306_clk;
assign _U2306_in = wdata;
assign _U2306_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2306 (
    .in(_U2306_in),
    .clk(_U2306_clk),
    .out(rdata)
);
endmodule

module delay__U2302 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2303_in;
wire _U2303_clk;
assign _U2303_in = wdata;
assign _U2303_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2303 (
    .in(_U2303_in),
    .clk(_U2303_clk),
    .out(rdata)
);
endmodule

module delay__U2296 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2297_in;
wire _U2297_clk;
wire [15:0] _U2297_out;
wire [15:0] _U2298_in;
wire _U2298_clk;
assign _U2297_in = wdata;
assign _U2297_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2297 (
    .in(_U2297_in),
    .clk(_U2297_clk),
    .out(_U2297_out)
);
assign _U2298_in = _U2297_out;
assign _U2298_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2298 (
    .in(_U2298_in),
    .clk(_U2298_clk),
    .out(rdata)
);
endmodule

module delay__U2290 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2291_in;
wire _U2291_clk;
wire [15:0] _U2291_out;
wire [15:0] _U2292_in;
wire _U2292_clk;
assign _U2291_in = wdata;
assign _U2291_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2291 (
    .in(_U2291_in),
    .clk(_U2291_clk),
    .out(_U2291_out)
);
assign _U2292_in = _U2291_out;
assign _U2292_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2292 (
    .in(_U2292_in),
    .clk(_U2292_clk),
    .out(rdata)
);
endmodule

module delay__U2285 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2286_in;
wire _U2286_clk;
assign _U2286_in = wdata;
assign _U2286_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2286 (
    .in(_U2286_in),
    .clk(_U2286_clk),
    .out(rdata)
);
endmodule

module delay__U2282 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2283_in;
wire _U2283_clk;
assign _U2283_in = wdata;
assign _U2283_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2283 (
    .in(_U2283_in),
    .clk(_U2283_clk),
    .out(rdata)
);
endmodule

module delay__U2276 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2277_in;
wire _U2277_clk;
wire [15:0] _U2277_out;
wire [15:0] _U2278_in;
wire _U2278_clk;
assign _U2277_in = wdata;
assign _U2277_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2277 (
    .in(_U2277_in),
    .clk(_U2277_clk),
    .out(_U2277_out)
);
assign _U2278_in = _U2277_out;
assign _U2278_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2278 (
    .in(_U2278_in),
    .clk(_U2278_clk),
    .out(rdata)
);
endmodule

module delay__U2271 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2272_in;
wire _U2272_clk;
wire [15:0] _U2272_out;
wire [15:0] _U2273_in;
wire _U2273_clk;
wire [15:0] _U2273_out;
wire [15:0] _U2274_in;
wire _U2274_clk;
assign _U2272_in = wdata;
assign _U2272_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2272 (
    .in(_U2272_in),
    .clk(_U2272_clk),
    .out(_U2272_out)
);
assign _U2273_in = _U2272_out;
assign _U2273_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2273 (
    .in(_U2273_in),
    .clk(_U2273_clk),
    .out(_U2273_out)
);
assign _U2274_in = _U2273_out;
assign _U2274_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2274 (
    .in(_U2274_in),
    .clk(_U2274_clk),
    .out(rdata)
);
endmodule

module padded16_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_grad_x_stencil_read_ren,
    input [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_grad_x_stencil_read [5:0],
    input op_hcompute_grad_y_stencil_read_ren,
    input [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_grad_y_stencil_read [5:0],
    input op_hcompute_padded16_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U2275_clk;
wire [15:0] delay_sr_U2275_wdata;
wire [15:0] delay_sr_U2275_rdata;
wire delay_sr_U2275_rst_n;
wire delay_sr_U2275_flush;
wire delay_sr_U2279_clk;
wire [15:0] delay_sr_U2279_wdata;
wire [15:0] delay_sr_U2279_rdata;
wire delay_sr_U2279_rst_n;
wire delay_sr_U2279_flush;
wire delay_sr_U2281_clk;
wire [15:0] delay_sr_U2281_wdata;
wire [15:0] delay_sr_U2281_rdata;
wire delay_sr_U2281_rst_n;
wire delay_sr_U2281_flush;
wire delay_sr_U2284_clk;
wire [15:0] delay_sr_U2284_wdata;
wire [15:0] delay_sr_U2284_rdata;
wire delay_sr_U2284_rst_n;
wire delay_sr_U2284_flush;
wire delay_sr_U2287_clk;
wire [15:0] delay_sr_U2287_wdata;
wire [15:0] delay_sr_U2287_rdata;
wire delay_sr_U2287_rst_n;
wire delay_sr_U2287_flush;
wire delay_sr_U2289_clk;
wire [15:0] delay_sr_U2289_wdata;
wire [15:0] delay_sr_U2289_rdata;
wire delay_sr_U2289_rst_n;
wire delay_sr_U2289_flush;
wire delay_sr_U2293_clk;
wire [15:0] delay_sr_U2293_wdata;
wire [15:0] delay_sr_U2293_rdata;
wire delay_sr_U2293_rst_n;
wire delay_sr_U2293_flush;
wire delay_sr_U2295_clk;
wire [15:0] delay_sr_U2295_wdata;
wire [15:0] delay_sr_U2295_rdata;
wire delay_sr_U2295_rst_n;
wire delay_sr_U2295_flush;
wire delay_sr_U2299_clk;
wire [15:0] delay_sr_U2299_wdata;
wire [15:0] delay_sr_U2299_rdata;
wire delay_sr_U2299_rst_n;
wire delay_sr_U2299_flush;
wire delay_sr_U2301_clk;
wire [15:0] delay_sr_U2301_wdata;
wire [15:0] delay_sr_U2301_rdata;
wire delay_sr_U2301_rst_n;
wire delay_sr_U2301_flush;
wire delay_sr_U2304_clk;
wire [15:0] delay_sr_U2304_wdata;
wire [15:0] delay_sr_U2304_rdata;
wire delay_sr_U2304_rst_n;
wire delay_sr_U2304_flush;
wire delay_sr_U2307_clk;
wire [15:0] delay_sr_U2307_wdata;
wire [15:0] delay_sr_U2307_rdata;
wire delay_sr_U2307_rst_n;
wire delay_sr_U2307_flush;
assign delay_sr_U2275_clk = clk;
assign delay_sr_U2275_wdata = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign delay_sr_U2275_rst_n = rst_n;
assign delay_sr_U2275_flush = flush;
delay__U2271 delay_sr_U2275 (
    .clk(delay_sr_U2275_clk),
    .wdata(delay_sr_U2275_wdata),
    .rdata(delay_sr_U2275_rdata),
    .rst_n(delay_sr_U2275_rst_n),
    .flush(delay_sr_U2275_flush)
);
assign delay_sr_U2279_clk = clk;
assign delay_sr_U2279_wdata = delay_sr_U2275_rdata;
assign delay_sr_U2279_rst_n = rst_n;
assign delay_sr_U2279_flush = flush;
delay__U2276 delay_sr_U2279 (
    .clk(delay_sr_U2279_clk),
    .wdata(delay_sr_U2279_wdata),
    .rdata(delay_sr_U2279_rdata),
    .rst_n(delay_sr_U2279_rst_n),
    .flush(delay_sr_U2279_flush)
);
assign delay_sr_U2281_clk = clk;
assign delay_sr_U2281_wdata = delay_sr_U2279_rdata;
assign delay_sr_U2281_rst_n = rst_n;
assign delay_sr_U2281_flush = flush;
memtile_long_delay__U2280 delay_sr_U2281 (
    .clk(delay_sr_U2281_clk),
    .wdata(delay_sr_U2281_wdata),
    .rdata(delay_sr_U2281_rdata),
    .rst_n(delay_sr_U2281_rst_n),
    .flush(delay_sr_U2281_flush)
);
assign delay_sr_U2284_clk = clk;
assign delay_sr_U2284_wdata = delay_sr_U2281_rdata;
assign delay_sr_U2284_rst_n = rst_n;
assign delay_sr_U2284_flush = flush;
delay__U2282 delay_sr_U2284 (
    .clk(delay_sr_U2284_clk),
    .wdata(delay_sr_U2284_wdata),
    .rdata(delay_sr_U2284_rdata),
    .rst_n(delay_sr_U2284_rst_n),
    .flush(delay_sr_U2284_flush)
);
assign delay_sr_U2287_clk = clk;
assign delay_sr_U2287_wdata = delay_sr_U2284_rdata;
assign delay_sr_U2287_rst_n = rst_n;
assign delay_sr_U2287_flush = flush;
delay__U2285 delay_sr_U2287 (
    .clk(delay_sr_U2287_clk),
    .wdata(delay_sr_U2287_wdata),
    .rdata(delay_sr_U2287_rdata),
    .rst_n(delay_sr_U2287_rst_n),
    .flush(delay_sr_U2287_flush)
);
assign delay_sr_U2289_clk = clk;
assign delay_sr_U2289_wdata = delay_sr_U2287_rdata;
assign delay_sr_U2289_rst_n = rst_n;
assign delay_sr_U2289_flush = flush;
memtile_long_delay__U2288 delay_sr_U2289 (
    .clk(delay_sr_U2289_clk),
    .wdata(delay_sr_U2289_wdata),
    .rdata(delay_sr_U2289_rdata),
    .rst_n(delay_sr_U2289_rst_n),
    .flush(delay_sr_U2289_flush)
);
assign delay_sr_U2293_clk = clk;
assign delay_sr_U2293_wdata = delay_sr_U2289_rdata;
assign delay_sr_U2293_rst_n = rst_n;
assign delay_sr_U2293_flush = flush;
delay__U2290 delay_sr_U2293 (
    .clk(delay_sr_U2293_clk),
    .wdata(delay_sr_U2293_wdata),
    .rdata(delay_sr_U2293_rdata),
    .rst_n(delay_sr_U2293_rst_n),
    .flush(delay_sr_U2293_flush)
);
assign delay_sr_U2295_clk = clk;
assign delay_sr_U2295_wdata = delay_sr_U2293_rdata;
assign delay_sr_U2295_rst_n = rst_n;
assign delay_sr_U2295_flush = flush;
memtile_long_delay__U2294 delay_sr_U2295 (
    .clk(delay_sr_U2295_clk),
    .wdata(delay_sr_U2295_wdata),
    .rdata(delay_sr_U2295_rdata),
    .rst_n(delay_sr_U2295_rst_n),
    .flush(delay_sr_U2295_flush)
);
assign delay_sr_U2299_clk = clk;
assign delay_sr_U2299_wdata = delay_sr_U2295_rdata;
assign delay_sr_U2299_rst_n = rst_n;
assign delay_sr_U2299_flush = flush;
delay__U2296 delay_sr_U2299 (
    .clk(delay_sr_U2299_clk),
    .wdata(delay_sr_U2299_wdata),
    .rdata(delay_sr_U2299_rdata),
    .rst_n(delay_sr_U2299_rst_n),
    .flush(delay_sr_U2299_flush)
);
assign delay_sr_U2301_clk = clk;
assign delay_sr_U2301_wdata = delay_sr_U2299_rdata;
assign delay_sr_U2301_rst_n = rst_n;
assign delay_sr_U2301_flush = flush;
memtile_long_delay__U2300 delay_sr_U2301 (
    .clk(delay_sr_U2301_clk),
    .wdata(delay_sr_U2301_wdata),
    .rdata(delay_sr_U2301_rdata),
    .rst_n(delay_sr_U2301_rst_n),
    .flush(delay_sr_U2301_flush)
);
assign delay_sr_U2304_clk = clk;
assign delay_sr_U2304_wdata = delay_sr_U2301_rdata;
assign delay_sr_U2304_rst_n = rst_n;
assign delay_sr_U2304_flush = flush;
delay__U2302 delay_sr_U2304 (
    .clk(delay_sr_U2304_clk),
    .wdata(delay_sr_U2304_wdata),
    .rdata(delay_sr_U2304_rdata),
    .rst_n(delay_sr_U2304_rst_n),
    .flush(delay_sr_U2304_flush)
);
assign delay_sr_U2307_clk = clk;
assign delay_sr_U2307_wdata = delay_sr_U2304_rdata;
assign delay_sr_U2307_rst_n = rst_n;
assign delay_sr_U2307_flush = flush;
delay__U2305 delay_sr_U2307 (
    .clk(delay_sr_U2307_clk),
    .wdata(delay_sr_U2307_wdata),
    .rdata(delay_sr_U2307_rdata),
    .rst_n(delay_sr_U2307_rst_n),
    .flush(delay_sr_U2307_flush)
);
assign op_hcompute_grad_x_stencil_read[5] = delay_sr_U2279_rdata;
assign op_hcompute_grad_x_stencil_read[4] = delay_sr_U2293_rdata;
assign op_hcompute_grad_x_stencil_read[3] = delay_sr_U2299_rdata;
assign op_hcompute_grad_x_stencil_read[2] = delay_sr_U2289_rdata;
assign op_hcompute_grad_x_stencil_read[1] = delay_sr_U2275_rdata;
assign op_hcompute_grad_x_stencil_read[0] = delay_sr_U2295_rdata;
assign op_hcompute_grad_y_stencil_read[5] = delay_sr_U2284_rdata;
assign op_hcompute_grad_y_stencil_read[4] = delay_sr_U2281_rdata;
assign op_hcompute_grad_y_stencil_read[3] = delay_sr_U2287_rdata;
assign op_hcompute_grad_y_stencil_read[2] = delay_sr_U2301_rdata;
assign op_hcompute_grad_y_stencil_read[1] = delay_sr_U2304_rdata;
assign op_hcompute_grad_y_stencil_read[0] = delay_sr_U2307_rdata;
endmodule

module delay__U2268 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2269_in;
wire _U2269_clk;
assign _U2269_in = wdata;
assign _U2269_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2269 (
    .in(_U2269_in),
    .clk(_U2269_clk),
    .out(rdata)
);
endmodule

module delay__U2265 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2266_in;
wire _U2266_clk;
assign _U2266_in = wdata;
assign _U2266_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2266 (
    .in(_U2266_in),
    .clk(_U2266_clk),
    .out(rdata)
);
endmodule

module delay__U2260 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2261_in;
wire _U2261_clk;
assign _U2261_in = wdata;
assign _U2261_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2261 (
    .in(_U2261_in),
    .clk(_U2261_clk),
    .out(rdata)
);
endmodule

module delay__U2257 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2258_in;
wire _U2258_clk;
assign _U2258_in = wdata;
assign _U2258_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2258 (
    .in(_U2258_in),
    .clk(_U2258_clk),
    .out(rdata)
);
endmodule

module delay__U2252 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2253_in;
wire _U2253_clk;
assign _U2253_in = wdata;
assign _U2253_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2253 (
    .in(_U2253_in),
    .clk(_U2253_clk),
    .out(rdata)
);
endmodule

module delay__U2249 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2250_in;
wire _U2250_clk;
assign _U2250_in = wdata;
assign _U2250_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2250 (
    .in(_U2250_in),
    .clk(_U2250_clk),
    .out(rdata)
);
endmodule

module delay__U2240 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2241_in;
wire _U2241_clk;
wire [15:0] _U2241_out;
wire [15:0] _U2242_in;
wire _U2242_clk;
wire [15:0] _U2242_out;
wire [15:0] _U2243_in;
wire _U2243_clk;
wire [15:0] _U2243_out;
wire [15:0] _U2244_in;
wire _U2244_clk;
wire [15:0] _U2244_out;
wire [15:0] _U2245_in;
wire _U2245_clk;
wire [15:0] _U2245_out;
wire [15:0] _U2246_in;
wire _U2246_clk;
wire [15:0] _U2246_out;
wire [15:0] _U2247_in;
wire _U2247_clk;
assign _U2241_in = wdata;
assign _U2241_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2241 (
    .in(_U2241_in),
    .clk(_U2241_clk),
    .out(_U2241_out)
);
assign _U2242_in = _U2241_out;
assign _U2242_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2242 (
    .in(_U2242_in),
    .clk(_U2242_clk),
    .out(_U2242_out)
);
assign _U2243_in = _U2242_out;
assign _U2243_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2243 (
    .in(_U2243_in),
    .clk(_U2243_clk),
    .out(_U2243_out)
);
assign _U2244_in = _U2243_out;
assign _U2244_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2244 (
    .in(_U2244_in),
    .clk(_U2244_clk),
    .out(_U2244_out)
);
assign _U2245_in = _U2244_out;
assign _U2245_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2245 (
    .in(_U2245_in),
    .clk(_U2245_clk),
    .out(_U2245_out)
);
assign _U2246_in = _U2245_out;
assign _U2246_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2246 (
    .in(_U2246_in),
    .clk(_U2246_clk),
    .out(_U2246_out)
);
assign _U2247_in = _U2246_out;
assign _U2247_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2247 (
    .in(_U2247_in),
    .clk(_U2247_clk),
    .out(rdata)
);
endmodule

module lyy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgyy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgyy_stencil_1_read [8:0],
    input op_hcompute_lyy_stencil_write_wen,
    input [15:0] op_hcompute_lyy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lyy_stencil_write [0:0]
);
wire delay_sr_U2248_clk;
wire [15:0] delay_sr_U2248_wdata;
wire [15:0] delay_sr_U2248_rdata;
wire delay_sr_U2248_rst_n;
wire delay_sr_U2248_flush;
wire delay_sr_U2251_clk;
wire [15:0] delay_sr_U2251_wdata;
wire [15:0] delay_sr_U2251_rdata;
wire delay_sr_U2251_rst_n;
wire delay_sr_U2251_flush;
wire delay_sr_U2254_clk;
wire [15:0] delay_sr_U2254_wdata;
wire [15:0] delay_sr_U2254_rdata;
wire delay_sr_U2254_rst_n;
wire delay_sr_U2254_flush;
wire delay_sr_U2256_clk;
wire [15:0] delay_sr_U2256_wdata;
wire [15:0] delay_sr_U2256_rdata;
wire delay_sr_U2256_rst_n;
wire delay_sr_U2256_flush;
wire delay_sr_U2259_clk;
wire [15:0] delay_sr_U2259_wdata;
wire [15:0] delay_sr_U2259_rdata;
wire delay_sr_U2259_rst_n;
wire delay_sr_U2259_flush;
wire delay_sr_U2262_clk;
wire [15:0] delay_sr_U2262_wdata;
wire [15:0] delay_sr_U2262_rdata;
wire delay_sr_U2262_rst_n;
wire delay_sr_U2262_flush;
wire delay_sr_U2264_clk;
wire [15:0] delay_sr_U2264_wdata;
wire [15:0] delay_sr_U2264_rdata;
wire delay_sr_U2264_rst_n;
wire delay_sr_U2264_flush;
wire delay_sr_U2267_clk;
wire [15:0] delay_sr_U2267_wdata;
wire [15:0] delay_sr_U2267_rdata;
wire delay_sr_U2267_rst_n;
wire delay_sr_U2267_flush;
wire delay_sr_U2270_clk;
wire [15:0] delay_sr_U2270_wdata;
wire [15:0] delay_sr_U2270_rdata;
wire delay_sr_U2270_rst_n;
wire delay_sr_U2270_flush;
assign delay_sr_U2248_clk = clk;
assign delay_sr_U2248_wdata = op_hcompute_lyy_stencil_write[0];
assign delay_sr_U2248_rst_n = rst_n;
assign delay_sr_U2248_flush = flush;
delay__U2240 delay_sr_U2248 (
    .clk(delay_sr_U2248_clk),
    .wdata(delay_sr_U2248_wdata),
    .rdata(delay_sr_U2248_rdata),
    .rst_n(delay_sr_U2248_rst_n),
    .flush(delay_sr_U2248_flush)
);
assign delay_sr_U2251_clk = clk;
assign delay_sr_U2251_wdata = delay_sr_U2248_rdata;
assign delay_sr_U2251_rst_n = rst_n;
assign delay_sr_U2251_flush = flush;
delay__U2249 delay_sr_U2251 (
    .clk(delay_sr_U2251_clk),
    .wdata(delay_sr_U2251_wdata),
    .rdata(delay_sr_U2251_rdata),
    .rst_n(delay_sr_U2251_rst_n),
    .flush(delay_sr_U2251_flush)
);
assign delay_sr_U2254_clk = clk;
assign delay_sr_U2254_wdata = delay_sr_U2251_rdata;
assign delay_sr_U2254_rst_n = rst_n;
assign delay_sr_U2254_flush = flush;
delay__U2252 delay_sr_U2254 (
    .clk(delay_sr_U2254_clk),
    .wdata(delay_sr_U2254_wdata),
    .rdata(delay_sr_U2254_rdata),
    .rst_n(delay_sr_U2254_rst_n),
    .flush(delay_sr_U2254_flush)
);
assign delay_sr_U2256_clk = clk;
assign delay_sr_U2256_wdata = delay_sr_U2254_rdata;
assign delay_sr_U2256_rst_n = rst_n;
assign delay_sr_U2256_flush = flush;
memtile_long_delay__U2255 delay_sr_U2256 (
    .clk(delay_sr_U2256_clk),
    .wdata(delay_sr_U2256_wdata),
    .rdata(delay_sr_U2256_rdata),
    .rst_n(delay_sr_U2256_rst_n),
    .flush(delay_sr_U2256_flush)
);
assign delay_sr_U2259_clk = clk;
assign delay_sr_U2259_wdata = delay_sr_U2256_rdata;
assign delay_sr_U2259_rst_n = rst_n;
assign delay_sr_U2259_flush = flush;
delay__U2257 delay_sr_U2259 (
    .clk(delay_sr_U2259_clk),
    .wdata(delay_sr_U2259_wdata),
    .rdata(delay_sr_U2259_rdata),
    .rst_n(delay_sr_U2259_rst_n),
    .flush(delay_sr_U2259_flush)
);
assign delay_sr_U2262_clk = clk;
assign delay_sr_U2262_wdata = delay_sr_U2259_rdata;
assign delay_sr_U2262_rst_n = rst_n;
assign delay_sr_U2262_flush = flush;
delay__U2260 delay_sr_U2262 (
    .clk(delay_sr_U2262_clk),
    .wdata(delay_sr_U2262_wdata),
    .rdata(delay_sr_U2262_rdata),
    .rst_n(delay_sr_U2262_rst_n),
    .flush(delay_sr_U2262_flush)
);
assign delay_sr_U2264_clk = clk;
assign delay_sr_U2264_wdata = delay_sr_U2262_rdata;
assign delay_sr_U2264_rst_n = rst_n;
assign delay_sr_U2264_flush = flush;
memtile_long_delay__U2263 delay_sr_U2264 (
    .clk(delay_sr_U2264_clk),
    .wdata(delay_sr_U2264_wdata),
    .rdata(delay_sr_U2264_rdata),
    .rst_n(delay_sr_U2264_rst_n),
    .flush(delay_sr_U2264_flush)
);
assign delay_sr_U2267_clk = clk;
assign delay_sr_U2267_wdata = delay_sr_U2264_rdata;
assign delay_sr_U2267_rst_n = rst_n;
assign delay_sr_U2267_flush = flush;
delay__U2265 delay_sr_U2267 (
    .clk(delay_sr_U2267_clk),
    .wdata(delay_sr_U2267_wdata),
    .rdata(delay_sr_U2267_rdata),
    .rst_n(delay_sr_U2267_rst_n),
    .flush(delay_sr_U2267_flush)
);
assign delay_sr_U2270_clk = clk;
assign delay_sr_U2270_wdata = delay_sr_U2267_rdata;
assign delay_sr_U2270_rst_n = rst_n;
assign delay_sr_U2270_flush = flush;
delay__U2268 delay_sr_U2270 (
    .clk(delay_sr_U2270_clk),
    .wdata(delay_sr_U2270_wdata),
    .rdata(delay_sr_U2270_rdata),
    .rst_n(delay_sr_U2270_rst_n),
    .flush(delay_sr_U2270_flush)
);
assign op_hcompute_lgyy_stencil_1_read[8] = delay_sr_U2251_rdata;
assign op_hcompute_lgyy_stencil_1_read[7] = delay_sr_U2248_rdata;
assign op_hcompute_lgyy_stencil_1_read[6] = delay_sr_U2254_rdata;
assign op_hcompute_lgyy_stencil_1_read[5] = delay_sr_U2256_rdata;
assign op_hcompute_lgyy_stencil_1_read[4] = delay_sr_U2259_rdata;
assign op_hcompute_lgyy_stencil_1_read[3] = delay_sr_U2262_rdata;
assign op_hcompute_lgyy_stencil_1_read[2] = delay_sr_U2264_rdata;
assign op_hcompute_lgyy_stencil_1_read[1] = delay_sr_U2267_rdata;
assign op_hcompute_lgyy_stencil_1_read[0] = delay_sr_U2270_rdata;
endmodule

module delay__U2237 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2238_in;
wire _U2238_clk;
assign _U2238_in = wdata;
assign _U2238_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2238 (
    .in(_U2238_in),
    .clk(_U2238_clk),
    .out(rdata)
);
endmodule

module delay__U2234 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2235_in;
wire _U2235_clk;
assign _U2235_in = wdata;
assign _U2235_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2235 (
    .in(_U2235_in),
    .clk(_U2235_clk),
    .out(rdata)
);
endmodule

module delay__U2229 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2230_in;
wire _U2230_clk;
assign _U2230_in = wdata;
assign _U2230_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2230 (
    .in(_U2230_in),
    .clk(_U2230_clk),
    .out(rdata)
);
endmodule

module delay__U2226 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2227_in;
wire _U2227_clk;
assign _U2227_in = wdata;
assign _U2227_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2227 (
    .in(_U2227_in),
    .clk(_U2227_clk),
    .out(rdata)
);
endmodule

module delay__U2221 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2222_in;
wire _U2222_clk;
assign _U2222_in = wdata;
assign _U2222_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2222 (
    .in(_U2222_in),
    .clk(_U2222_clk),
    .out(rdata)
);
endmodule

module delay__U2218 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2219_in;
wire _U2219_clk;
assign _U2219_in = wdata;
assign _U2219_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2219 (
    .in(_U2219_in),
    .clk(_U2219_clk),
    .out(rdata)
);
endmodule

module delay__U2209 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2210_in;
wire _U2210_clk;
wire [15:0] _U2210_out;
wire [15:0] _U2211_in;
wire _U2211_clk;
wire [15:0] _U2211_out;
wire [15:0] _U2212_in;
wire _U2212_clk;
wire [15:0] _U2212_out;
wire [15:0] _U2213_in;
wire _U2213_clk;
wire [15:0] _U2213_out;
wire [15:0] _U2214_in;
wire _U2214_clk;
wire [15:0] _U2214_out;
wire [15:0] _U2215_in;
wire _U2215_clk;
wire [15:0] _U2215_out;
wire [15:0] _U2216_in;
wire _U2216_clk;
assign _U2210_in = wdata;
assign _U2210_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2210 (
    .in(_U2210_in),
    .clk(_U2210_clk),
    .out(_U2210_out)
);
assign _U2211_in = _U2210_out;
assign _U2211_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2211 (
    .in(_U2211_in),
    .clk(_U2211_clk),
    .out(_U2211_out)
);
assign _U2212_in = _U2211_out;
assign _U2212_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2212 (
    .in(_U2212_in),
    .clk(_U2212_clk),
    .out(_U2212_out)
);
assign _U2213_in = _U2212_out;
assign _U2213_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2213 (
    .in(_U2213_in),
    .clk(_U2213_clk),
    .out(_U2213_out)
);
assign _U2214_in = _U2213_out;
assign _U2214_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2214 (
    .in(_U2214_in),
    .clk(_U2214_clk),
    .out(_U2214_out)
);
assign _U2215_in = _U2214_out;
assign _U2215_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2215 (
    .in(_U2215_in),
    .clk(_U2215_clk),
    .out(_U2215_out)
);
assign _U2216_in = _U2215_out;
assign _U2216_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2216 (
    .in(_U2216_in),
    .clk(_U2216_clk),
    .out(rdata)
);
endmodule

module lxy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxy_stencil_1_read [8:0],
    input op_hcompute_lxy_stencil_write_wen,
    input [15:0] op_hcompute_lxy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lxy_stencil_write [0:0]
);
wire delay_sr_U2217_clk;
wire [15:0] delay_sr_U2217_wdata;
wire [15:0] delay_sr_U2217_rdata;
wire delay_sr_U2217_rst_n;
wire delay_sr_U2217_flush;
wire delay_sr_U2220_clk;
wire [15:0] delay_sr_U2220_wdata;
wire [15:0] delay_sr_U2220_rdata;
wire delay_sr_U2220_rst_n;
wire delay_sr_U2220_flush;
wire delay_sr_U2223_clk;
wire [15:0] delay_sr_U2223_wdata;
wire [15:0] delay_sr_U2223_rdata;
wire delay_sr_U2223_rst_n;
wire delay_sr_U2223_flush;
wire delay_sr_U2225_clk;
wire [15:0] delay_sr_U2225_wdata;
wire [15:0] delay_sr_U2225_rdata;
wire delay_sr_U2225_rst_n;
wire delay_sr_U2225_flush;
wire delay_sr_U2228_clk;
wire [15:0] delay_sr_U2228_wdata;
wire [15:0] delay_sr_U2228_rdata;
wire delay_sr_U2228_rst_n;
wire delay_sr_U2228_flush;
wire delay_sr_U2231_clk;
wire [15:0] delay_sr_U2231_wdata;
wire [15:0] delay_sr_U2231_rdata;
wire delay_sr_U2231_rst_n;
wire delay_sr_U2231_flush;
wire delay_sr_U2233_clk;
wire [15:0] delay_sr_U2233_wdata;
wire [15:0] delay_sr_U2233_rdata;
wire delay_sr_U2233_rst_n;
wire delay_sr_U2233_flush;
wire delay_sr_U2236_clk;
wire [15:0] delay_sr_U2236_wdata;
wire [15:0] delay_sr_U2236_rdata;
wire delay_sr_U2236_rst_n;
wire delay_sr_U2236_flush;
wire delay_sr_U2239_clk;
wire [15:0] delay_sr_U2239_wdata;
wire [15:0] delay_sr_U2239_rdata;
wire delay_sr_U2239_rst_n;
wire delay_sr_U2239_flush;
assign delay_sr_U2217_clk = clk;
assign delay_sr_U2217_wdata = op_hcompute_lxy_stencil_write[0];
assign delay_sr_U2217_rst_n = rst_n;
assign delay_sr_U2217_flush = flush;
delay__U2209 delay_sr_U2217 (
    .clk(delay_sr_U2217_clk),
    .wdata(delay_sr_U2217_wdata),
    .rdata(delay_sr_U2217_rdata),
    .rst_n(delay_sr_U2217_rst_n),
    .flush(delay_sr_U2217_flush)
);
assign delay_sr_U2220_clk = clk;
assign delay_sr_U2220_wdata = delay_sr_U2217_rdata;
assign delay_sr_U2220_rst_n = rst_n;
assign delay_sr_U2220_flush = flush;
delay__U2218 delay_sr_U2220 (
    .clk(delay_sr_U2220_clk),
    .wdata(delay_sr_U2220_wdata),
    .rdata(delay_sr_U2220_rdata),
    .rst_n(delay_sr_U2220_rst_n),
    .flush(delay_sr_U2220_flush)
);
assign delay_sr_U2223_clk = clk;
assign delay_sr_U2223_wdata = delay_sr_U2220_rdata;
assign delay_sr_U2223_rst_n = rst_n;
assign delay_sr_U2223_flush = flush;
delay__U2221 delay_sr_U2223 (
    .clk(delay_sr_U2223_clk),
    .wdata(delay_sr_U2223_wdata),
    .rdata(delay_sr_U2223_rdata),
    .rst_n(delay_sr_U2223_rst_n),
    .flush(delay_sr_U2223_flush)
);
assign delay_sr_U2225_clk = clk;
assign delay_sr_U2225_wdata = delay_sr_U2223_rdata;
assign delay_sr_U2225_rst_n = rst_n;
assign delay_sr_U2225_flush = flush;
memtile_long_delay__U2224 delay_sr_U2225 (
    .clk(delay_sr_U2225_clk),
    .wdata(delay_sr_U2225_wdata),
    .rdata(delay_sr_U2225_rdata),
    .rst_n(delay_sr_U2225_rst_n),
    .flush(delay_sr_U2225_flush)
);
assign delay_sr_U2228_clk = clk;
assign delay_sr_U2228_wdata = delay_sr_U2225_rdata;
assign delay_sr_U2228_rst_n = rst_n;
assign delay_sr_U2228_flush = flush;
delay__U2226 delay_sr_U2228 (
    .clk(delay_sr_U2228_clk),
    .wdata(delay_sr_U2228_wdata),
    .rdata(delay_sr_U2228_rdata),
    .rst_n(delay_sr_U2228_rst_n),
    .flush(delay_sr_U2228_flush)
);
assign delay_sr_U2231_clk = clk;
assign delay_sr_U2231_wdata = delay_sr_U2228_rdata;
assign delay_sr_U2231_rst_n = rst_n;
assign delay_sr_U2231_flush = flush;
delay__U2229 delay_sr_U2231 (
    .clk(delay_sr_U2231_clk),
    .wdata(delay_sr_U2231_wdata),
    .rdata(delay_sr_U2231_rdata),
    .rst_n(delay_sr_U2231_rst_n),
    .flush(delay_sr_U2231_flush)
);
assign delay_sr_U2233_clk = clk;
assign delay_sr_U2233_wdata = delay_sr_U2231_rdata;
assign delay_sr_U2233_rst_n = rst_n;
assign delay_sr_U2233_flush = flush;
memtile_long_delay__U2232 delay_sr_U2233 (
    .clk(delay_sr_U2233_clk),
    .wdata(delay_sr_U2233_wdata),
    .rdata(delay_sr_U2233_rdata),
    .rst_n(delay_sr_U2233_rst_n),
    .flush(delay_sr_U2233_flush)
);
assign delay_sr_U2236_clk = clk;
assign delay_sr_U2236_wdata = delay_sr_U2233_rdata;
assign delay_sr_U2236_rst_n = rst_n;
assign delay_sr_U2236_flush = flush;
delay__U2234 delay_sr_U2236 (
    .clk(delay_sr_U2236_clk),
    .wdata(delay_sr_U2236_wdata),
    .rdata(delay_sr_U2236_rdata),
    .rst_n(delay_sr_U2236_rst_n),
    .flush(delay_sr_U2236_flush)
);
assign delay_sr_U2239_clk = clk;
assign delay_sr_U2239_wdata = delay_sr_U2236_rdata;
assign delay_sr_U2239_rst_n = rst_n;
assign delay_sr_U2239_flush = flush;
delay__U2237 delay_sr_U2239 (
    .clk(delay_sr_U2239_clk),
    .wdata(delay_sr_U2239_wdata),
    .rdata(delay_sr_U2239_rdata),
    .rst_n(delay_sr_U2239_rst_n),
    .flush(delay_sr_U2239_flush)
);
assign op_hcompute_lgxy_stencil_1_read[8] = delay_sr_U2220_rdata;
assign op_hcompute_lgxy_stencil_1_read[7] = delay_sr_U2217_rdata;
assign op_hcompute_lgxy_stencil_1_read[6] = delay_sr_U2223_rdata;
assign op_hcompute_lgxy_stencil_1_read[5] = delay_sr_U2225_rdata;
assign op_hcompute_lgxy_stencil_1_read[4] = delay_sr_U2228_rdata;
assign op_hcompute_lgxy_stencil_1_read[3] = delay_sr_U2231_rdata;
assign op_hcompute_lgxy_stencil_1_read[2] = delay_sr_U2233_rdata;
assign op_hcompute_lgxy_stencil_1_read[1] = delay_sr_U2236_rdata;
assign op_hcompute_lgxy_stencil_1_read[0] = delay_sr_U2239_rdata;
endmodule

module delay__U2206 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2207_in;
wire _U2207_clk;
assign _U2207_in = wdata;
assign _U2207_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2207 (
    .in(_U2207_in),
    .clk(_U2207_clk),
    .out(rdata)
);
endmodule

module delay__U2203 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2204_in;
wire _U2204_clk;
assign _U2204_in = wdata;
assign _U2204_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2204 (
    .in(_U2204_in),
    .clk(_U2204_clk),
    .out(rdata)
);
endmodule

module delay__U2198 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2199_in;
wire _U2199_clk;
assign _U2199_in = wdata;
assign _U2199_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2199 (
    .in(_U2199_in),
    .clk(_U2199_clk),
    .out(rdata)
);
endmodule

module delay__U2195 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2196_in;
wire _U2196_clk;
assign _U2196_in = wdata;
assign _U2196_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2196 (
    .in(_U2196_in),
    .clk(_U2196_clk),
    .out(rdata)
);
endmodule

module delay__U2190 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2191_in;
wire _U2191_clk;
assign _U2191_in = wdata;
assign _U2191_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2191 (
    .in(_U2191_in),
    .clk(_U2191_clk),
    .out(rdata)
);
endmodule

module delay__U2187 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2188_in;
wire _U2188_clk;
assign _U2188_in = wdata;
assign _U2188_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2188 (
    .in(_U2188_in),
    .clk(_U2188_clk),
    .out(rdata)
);
endmodule

module delay__U2178 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2179_in;
wire _U2179_clk;
wire [15:0] _U2179_out;
wire [15:0] _U2180_in;
wire _U2180_clk;
wire [15:0] _U2180_out;
wire [15:0] _U2181_in;
wire _U2181_clk;
wire [15:0] _U2181_out;
wire [15:0] _U2182_in;
wire _U2182_clk;
wire [15:0] _U2182_out;
wire [15:0] _U2183_in;
wire _U2183_clk;
wire [15:0] _U2183_out;
wire [15:0] _U2184_in;
wire _U2184_clk;
wire [15:0] _U2184_out;
wire [15:0] _U2185_in;
wire _U2185_clk;
assign _U2179_in = wdata;
assign _U2179_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2179 (
    .in(_U2179_in),
    .clk(_U2179_clk),
    .out(_U2179_out)
);
assign _U2180_in = _U2179_out;
assign _U2180_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2180 (
    .in(_U2180_in),
    .clk(_U2180_clk),
    .out(_U2180_out)
);
assign _U2181_in = _U2180_out;
assign _U2181_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2181 (
    .in(_U2181_in),
    .clk(_U2181_clk),
    .out(_U2181_out)
);
assign _U2182_in = _U2181_out;
assign _U2182_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2182 (
    .in(_U2182_in),
    .clk(_U2182_clk),
    .out(_U2182_out)
);
assign _U2183_in = _U2182_out;
assign _U2183_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2183 (
    .in(_U2183_in),
    .clk(_U2183_clk),
    .out(_U2183_out)
);
assign _U2184_in = _U2183_out;
assign _U2184_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2184 (
    .in(_U2184_in),
    .clk(_U2184_clk),
    .out(_U2184_out)
);
assign _U2185_in = _U2184_out;
assign _U2185_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2185 (
    .in(_U2185_in),
    .clk(_U2185_clk),
    .out(rdata)
);
endmodule

module lxx_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxx_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxx_stencil_1_read [8:0],
    input op_hcompute_lxx_stencil_write_wen,
    input [15:0] op_hcompute_lxx_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lxx_stencil_write [0:0]
);
wire delay_sr_U2186_clk;
wire [15:0] delay_sr_U2186_wdata;
wire [15:0] delay_sr_U2186_rdata;
wire delay_sr_U2186_rst_n;
wire delay_sr_U2186_flush;
wire delay_sr_U2189_clk;
wire [15:0] delay_sr_U2189_wdata;
wire [15:0] delay_sr_U2189_rdata;
wire delay_sr_U2189_rst_n;
wire delay_sr_U2189_flush;
wire delay_sr_U2192_clk;
wire [15:0] delay_sr_U2192_wdata;
wire [15:0] delay_sr_U2192_rdata;
wire delay_sr_U2192_rst_n;
wire delay_sr_U2192_flush;
wire delay_sr_U2194_clk;
wire [15:0] delay_sr_U2194_wdata;
wire [15:0] delay_sr_U2194_rdata;
wire delay_sr_U2194_rst_n;
wire delay_sr_U2194_flush;
wire delay_sr_U2197_clk;
wire [15:0] delay_sr_U2197_wdata;
wire [15:0] delay_sr_U2197_rdata;
wire delay_sr_U2197_rst_n;
wire delay_sr_U2197_flush;
wire delay_sr_U2200_clk;
wire [15:0] delay_sr_U2200_wdata;
wire [15:0] delay_sr_U2200_rdata;
wire delay_sr_U2200_rst_n;
wire delay_sr_U2200_flush;
wire delay_sr_U2202_clk;
wire [15:0] delay_sr_U2202_wdata;
wire [15:0] delay_sr_U2202_rdata;
wire delay_sr_U2202_rst_n;
wire delay_sr_U2202_flush;
wire delay_sr_U2205_clk;
wire [15:0] delay_sr_U2205_wdata;
wire [15:0] delay_sr_U2205_rdata;
wire delay_sr_U2205_rst_n;
wire delay_sr_U2205_flush;
wire delay_sr_U2208_clk;
wire [15:0] delay_sr_U2208_wdata;
wire [15:0] delay_sr_U2208_rdata;
wire delay_sr_U2208_rst_n;
wire delay_sr_U2208_flush;
assign delay_sr_U2186_clk = clk;
assign delay_sr_U2186_wdata = op_hcompute_lxx_stencil_write[0];
assign delay_sr_U2186_rst_n = rst_n;
assign delay_sr_U2186_flush = flush;
delay__U2178 delay_sr_U2186 (
    .clk(delay_sr_U2186_clk),
    .wdata(delay_sr_U2186_wdata),
    .rdata(delay_sr_U2186_rdata),
    .rst_n(delay_sr_U2186_rst_n),
    .flush(delay_sr_U2186_flush)
);
assign delay_sr_U2189_clk = clk;
assign delay_sr_U2189_wdata = delay_sr_U2186_rdata;
assign delay_sr_U2189_rst_n = rst_n;
assign delay_sr_U2189_flush = flush;
delay__U2187 delay_sr_U2189 (
    .clk(delay_sr_U2189_clk),
    .wdata(delay_sr_U2189_wdata),
    .rdata(delay_sr_U2189_rdata),
    .rst_n(delay_sr_U2189_rst_n),
    .flush(delay_sr_U2189_flush)
);
assign delay_sr_U2192_clk = clk;
assign delay_sr_U2192_wdata = delay_sr_U2189_rdata;
assign delay_sr_U2192_rst_n = rst_n;
assign delay_sr_U2192_flush = flush;
delay__U2190 delay_sr_U2192 (
    .clk(delay_sr_U2192_clk),
    .wdata(delay_sr_U2192_wdata),
    .rdata(delay_sr_U2192_rdata),
    .rst_n(delay_sr_U2192_rst_n),
    .flush(delay_sr_U2192_flush)
);
assign delay_sr_U2194_clk = clk;
assign delay_sr_U2194_wdata = delay_sr_U2192_rdata;
assign delay_sr_U2194_rst_n = rst_n;
assign delay_sr_U2194_flush = flush;
memtile_long_delay__U2193 delay_sr_U2194 (
    .clk(delay_sr_U2194_clk),
    .wdata(delay_sr_U2194_wdata),
    .rdata(delay_sr_U2194_rdata),
    .rst_n(delay_sr_U2194_rst_n),
    .flush(delay_sr_U2194_flush)
);
assign delay_sr_U2197_clk = clk;
assign delay_sr_U2197_wdata = delay_sr_U2194_rdata;
assign delay_sr_U2197_rst_n = rst_n;
assign delay_sr_U2197_flush = flush;
delay__U2195 delay_sr_U2197 (
    .clk(delay_sr_U2197_clk),
    .wdata(delay_sr_U2197_wdata),
    .rdata(delay_sr_U2197_rdata),
    .rst_n(delay_sr_U2197_rst_n),
    .flush(delay_sr_U2197_flush)
);
assign delay_sr_U2200_clk = clk;
assign delay_sr_U2200_wdata = delay_sr_U2197_rdata;
assign delay_sr_U2200_rst_n = rst_n;
assign delay_sr_U2200_flush = flush;
delay__U2198 delay_sr_U2200 (
    .clk(delay_sr_U2200_clk),
    .wdata(delay_sr_U2200_wdata),
    .rdata(delay_sr_U2200_rdata),
    .rst_n(delay_sr_U2200_rst_n),
    .flush(delay_sr_U2200_flush)
);
assign delay_sr_U2202_clk = clk;
assign delay_sr_U2202_wdata = delay_sr_U2200_rdata;
assign delay_sr_U2202_rst_n = rst_n;
assign delay_sr_U2202_flush = flush;
memtile_long_delay__U2201 delay_sr_U2202 (
    .clk(delay_sr_U2202_clk),
    .wdata(delay_sr_U2202_wdata),
    .rdata(delay_sr_U2202_rdata),
    .rst_n(delay_sr_U2202_rst_n),
    .flush(delay_sr_U2202_flush)
);
assign delay_sr_U2205_clk = clk;
assign delay_sr_U2205_wdata = delay_sr_U2202_rdata;
assign delay_sr_U2205_rst_n = rst_n;
assign delay_sr_U2205_flush = flush;
delay__U2203 delay_sr_U2205 (
    .clk(delay_sr_U2205_clk),
    .wdata(delay_sr_U2205_wdata),
    .rdata(delay_sr_U2205_rdata),
    .rst_n(delay_sr_U2205_rst_n),
    .flush(delay_sr_U2205_flush)
);
assign delay_sr_U2208_clk = clk;
assign delay_sr_U2208_wdata = delay_sr_U2205_rdata;
assign delay_sr_U2208_rst_n = rst_n;
assign delay_sr_U2208_flush = flush;
delay__U2206 delay_sr_U2208 (
    .clk(delay_sr_U2208_clk),
    .wdata(delay_sr_U2208_wdata),
    .rdata(delay_sr_U2208_rdata),
    .rst_n(delay_sr_U2208_rst_n),
    .flush(delay_sr_U2208_flush)
);
assign op_hcompute_lgxx_stencil_1_read[8] = delay_sr_U2189_rdata;
assign op_hcompute_lgxx_stencil_1_read[7] = delay_sr_U2186_rdata;
assign op_hcompute_lgxx_stencil_1_read[6] = delay_sr_U2192_rdata;
assign op_hcompute_lgxx_stencil_1_read[5] = delay_sr_U2194_rdata;
assign op_hcompute_lgxx_stencil_1_read[4] = delay_sr_U2197_rdata;
assign op_hcompute_lgxx_stencil_1_read[3] = delay_sr_U2200_rdata;
assign op_hcompute_lgxx_stencil_1_read[2] = delay_sr_U2202_rdata;
assign op_hcompute_lgxx_stencil_1_read[1] = delay_sr_U2205_rdata;
assign op_hcompute_lgxx_stencil_1_read[0] = delay_sr_U2208_rdata;
endmodule

module delay__U2173 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2174_in;
wire _U2174_clk;
wire [15:0] _U2174_out;
wire [15:0] _U2175_in;
wire _U2175_clk;
wire [15:0] _U2175_out;
wire [15:0] _U2176_in;
wire _U2176_clk;
assign _U2174_in = wdata;
assign _U2174_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2174 (
    .in(_U2174_in),
    .clk(_U2174_clk),
    .out(_U2174_out)
);
assign _U2175_in = _U2174_out;
assign _U2175_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2175 (
    .in(_U2175_in),
    .clk(_U2175_clk),
    .out(_U2175_out)
);
assign _U2176_in = _U2175_out;
assign _U2176_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2176 (
    .in(_U2176_in),
    .clk(_U2176_clk),
    .out(rdata)
);
endmodule

module lgyy_stencil_clkwrk_dsa2_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgyy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgyy_stencil_1_read [0:0],
    input op_hcompute_lgyy_stencil_write_wen,
    input [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgyy_stencil_write [0:0]
);
wire delay_sr_U2177_clk;
wire [15:0] delay_sr_U2177_wdata;
wire [15:0] delay_sr_U2177_rdata;
wire delay_sr_U2177_rst_n;
wire delay_sr_U2177_flush;
assign delay_sr_U2177_clk = clk;
assign delay_sr_U2177_wdata = op_hcompute_lgyy_stencil_write[0];
assign delay_sr_U2177_rst_n = rst_n;
assign delay_sr_U2177_flush = flush;
delay__U2173 delay_sr_U2177 (
    .clk(delay_sr_U2177_clk),
    .wdata(delay_sr_U2177_wdata),
    .rdata(delay_sr_U2177_rdata),
    .rst_n(delay_sr_U2177_rst_n),
    .flush(delay_sr_U2177_flush)
);
assign op_hcompute_lgyy_stencil_1_read[0] = delay_sr_U2177_rdata;
endmodule

module delay__U2167 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2168_in;
wire _U2168_clk;
wire [15:0] _U2168_out;
wire [15:0] _U2169_in;
wire _U2169_clk;
wire [15:0] _U2169_out;
wire [15:0] _U2170_in;
wire _U2170_clk;
wire [15:0] _U2170_out;
wire [15:0] _U2171_in;
wire _U2171_clk;
assign _U2168_in = wdata;
assign _U2168_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2168 (
    .in(_U2168_in),
    .clk(_U2168_clk),
    .out(_U2168_out)
);
assign _U2169_in = _U2168_out;
assign _U2169_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2169 (
    .in(_U2169_in),
    .clk(_U2169_clk),
    .out(_U2169_out)
);
assign _U2170_in = _U2169_out;
assign _U2170_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2170 (
    .in(_U2170_in),
    .clk(_U2170_clk),
    .out(_U2170_out)
);
assign _U2171_in = _U2170_out;
assign _U2171_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2171 (
    .in(_U2171_in),
    .clk(_U2171_clk),
    .out(rdata)
);
endmodule

module lgyy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgyy_stencil_1_write_wen,
    input [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgyy_stencil_1_write [0:0]
);
wire delay_sr_U2172_clk;
wire [15:0] delay_sr_U2172_wdata;
wire [15:0] delay_sr_U2172_rdata;
wire delay_sr_U2172_rst_n;
wire delay_sr_U2172_flush;
assign delay_sr_U2172_clk = clk;
assign delay_sr_U2172_wdata = op_hcompute_lgyy_stencil_1_write[0];
assign delay_sr_U2172_rst_n = rst_n;
assign delay_sr_U2172_flush = flush;
delay__U2167 delay_sr_U2172 (
    .clk(delay_sr_U2172_clk),
    .wdata(delay_sr_U2172_wdata),
    .rdata(delay_sr_U2172_rdata),
    .rst_n(delay_sr_U2172_rst_n),
    .flush(delay_sr_U2172_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U2172_rdata;
endmodule

module delay__U2162 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2163_in;
wire _U2163_clk;
wire [15:0] _U2163_out;
wire [15:0] _U2164_in;
wire _U2164_clk;
wire [15:0] _U2164_out;
wire [15:0] _U2165_in;
wire _U2165_clk;
assign _U2163_in = wdata;
assign _U2163_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2163 (
    .in(_U2163_in),
    .clk(_U2163_clk),
    .out(_U2163_out)
);
assign _U2164_in = _U2163_out;
assign _U2164_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2164 (
    .in(_U2164_in),
    .clk(_U2164_clk),
    .out(_U2164_out)
);
assign _U2165_in = _U2164_out;
assign _U2165_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2165 (
    .in(_U2165_in),
    .clk(_U2165_clk),
    .out(rdata)
);
endmodule

module lgxy_stencil_clkwrk_dsa1_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxy_stencil_1_read [0:0],
    input op_hcompute_lgxy_stencil_write_wen,
    input [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxy_stencil_write [0:0]
);
wire delay_sr_U2166_clk;
wire [15:0] delay_sr_U2166_wdata;
wire [15:0] delay_sr_U2166_rdata;
wire delay_sr_U2166_rst_n;
wire delay_sr_U2166_flush;
assign delay_sr_U2166_clk = clk;
assign delay_sr_U2166_wdata = op_hcompute_lgxy_stencil_write[0];
assign delay_sr_U2166_rst_n = rst_n;
assign delay_sr_U2166_flush = flush;
delay__U2162 delay_sr_U2166 (
    .clk(delay_sr_U2166_clk),
    .wdata(delay_sr_U2166_wdata),
    .rdata(delay_sr_U2166_rdata),
    .rst_n(delay_sr_U2166_rst_n),
    .flush(delay_sr_U2166_flush)
);
assign op_hcompute_lgxy_stencil_1_read[0] = delay_sr_U2166_rdata;
endmodule

module delay__U2155 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2156_in;
wire _U2156_clk;
wire [15:0] _U2156_out;
wire [15:0] _U2157_in;
wire _U2157_clk;
wire [15:0] _U2157_out;
wire [15:0] _U2158_in;
wire _U2158_clk;
assign _U2156_in = wdata;
assign _U2156_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2156 (
    .in(_U2156_in),
    .clk(_U2156_clk),
    .out(_U2156_out)
);
assign _U2157_in = _U2156_out;
assign _U2157_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2157 (
    .in(_U2157_in),
    .clk(_U2157_clk),
    .out(_U2157_out)
);
assign _U2158_in = _U2157_out;
assign _U2158_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2158 (
    .in(_U2158_in),
    .clk(_U2158_clk),
    .out(rdata)
);
endmodule

module lgxx_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxx_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxx_stencil_1_read [0:0],
    input op_hcompute_lgxx_stencil_write_wen,
    input [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxx_stencil_write [0:0]
);
wire delay_sr_U2159_clk;
wire [15:0] delay_sr_U2159_wdata;
wire [15:0] delay_sr_U2159_rdata;
wire delay_sr_U2159_rst_n;
wire delay_sr_U2159_flush;
assign delay_sr_U2159_clk = clk;
assign delay_sr_U2159_wdata = op_hcompute_lgxx_stencil_write[0];
assign delay_sr_U2159_rst_n = rst_n;
assign delay_sr_U2159_flush = flush;
delay__U2155 delay_sr_U2159 (
    .clk(delay_sr_U2159_clk),
    .wdata(delay_sr_U2159_wdata),
    .rdata(delay_sr_U2159_rdata),
    .rst_n(delay_sr_U2159_rst_n),
    .flush(delay_sr_U2159_flush)
);
assign op_hcompute_lgxx_stencil_1_read[0] = delay_sr_U2159_rdata;
endmodule

module delay__U2145 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2146_in;
wire _U2146_clk;
wire [15:0] _U2146_out;
wire [15:0] _U2147_in;
wire _U2147_clk;
wire [15:0] _U2147_out;
wire [15:0] _U2148_in;
wire _U2148_clk;
wire [15:0] _U2148_out;
wire [15:0] _U2149_in;
wire _U2149_clk;
assign _U2146_in = wdata;
assign _U2146_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2146 (
    .in(_U2146_in),
    .clk(_U2146_clk),
    .out(_U2146_out)
);
assign _U2147_in = _U2146_out;
assign _U2147_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2147 (
    .in(_U2147_in),
    .clk(_U2147_clk),
    .out(_U2147_out)
);
assign _U2148_in = _U2147_out;
assign _U2148_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2148 (
    .in(_U2148_in),
    .clk(_U2148_clk),
    .out(_U2148_out)
);
assign _U2149_in = _U2148_out;
assign _U2149_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2149 (
    .in(_U2149_in),
    .clk(_U2149_clk),
    .out(rdata)
);
endmodule

module grad_y_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_grad_y_stencil_write_wen,
    input [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_grad_y_stencil_write [0:0],
    input op_hcompute_lxy_stencil_read_ren,
    input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lxy_stencil_read [0:0],
    input op_hcompute_lyy_stencil_read_ren,
    input [15:0] op_hcompute_lyy_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lyy_stencil_read [0:0]
);
wire delay_sr_U2150_clk;
wire [15:0] delay_sr_U2150_wdata;
wire [15:0] delay_sr_U2150_rdata;
wire delay_sr_U2150_rst_n;
wire delay_sr_U2150_flush;
wire delay_sr_U2152_clk;
wire [15:0] delay_sr_U2152_wdata;
wire [15:0] delay_sr_U2152_rdata;
wire delay_sr_U2152_rst_n;
wire delay_sr_U2152_flush;
assign delay_sr_U2150_clk = clk;
assign delay_sr_U2150_wdata = op_hcompute_grad_y_stencil_write[0];
assign delay_sr_U2150_rst_n = rst_n;
assign delay_sr_U2150_flush = flush;
delay__U2145 delay_sr_U2150 (
    .clk(delay_sr_U2150_clk),
    .wdata(delay_sr_U2150_wdata),
    .rdata(delay_sr_U2150_rdata),
    .rst_n(delay_sr_U2150_rst_n),
    .flush(delay_sr_U2150_flush)
);
assign delay_sr_U2152_clk = clk;
assign delay_sr_U2152_wdata = delay_sr_U2150_rdata;
assign delay_sr_U2152_rst_n = rst_n;
assign delay_sr_U2152_flush = flush;
memtile_long_delay__U2151 delay_sr_U2152 (
    .clk(delay_sr_U2152_clk),
    .wdata(delay_sr_U2152_wdata),
    .rdata(delay_sr_U2152_rdata),
    .rst_n(delay_sr_U2152_rst_n),
    .flush(delay_sr_U2152_flush)
);
assign op_hcompute_lxy_stencil_read[0] = delay_sr_U2150_rdata;
assign op_hcompute_lyy_stencil_read[0] = delay_sr_U2152_rdata;
endmodule

module delay__U2137 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2138_in;
wire _U2138_clk;
wire [15:0] _U2138_out;
wire [15:0] _U2139_in;
wire _U2139_clk;
wire [15:0] _U2139_out;
wire [15:0] _U2140_in;
wire _U2140_clk;
wire [15:0] _U2140_out;
wire [15:0] _U2141_in;
wire _U2141_clk;
assign _U2138_in = wdata;
assign _U2138_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2138 (
    .in(_U2138_in),
    .clk(_U2138_clk),
    .out(_U2138_out)
);
assign _U2139_in = _U2138_out;
assign _U2139_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2139 (
    .in(_U2139_in),
    .clk(_U2139_clk),
    .out(_U2139_out)
);
assign _U2140_in = _U2139_out;
assign _U2140_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2140 (
    .in(_U2140_in),
    .clk(_U2140_clk),
    .out(_U2140_out)
);
assign _U2141_in = _U2140_out;
assign _U2141_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2141 (
    .in(_U2141_in),
    .clk(_U2141_clk),
    .out(rdata)
);
endmodule

module grad_x_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_grad_x_stencil_write_wen,
    input [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_grad_x_stencil_write [0:0],
    input op_hcompute_lxx_stencil_read_ren,
    input [15:0] op_hcompute_lxx_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lxx_stencil_read [0:0],
    input op_hcompute_lxy_stencil_read_ren,
    input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lxy_stencil_read [0:0]
);
wire delay_sr_U2142_clk;
wire [15:0] delay_sr_U2142_wdata;
wire [15:0] delay_sr_U2142_rdata;
wire delay_sr_U2142_rst_n;
wire delay_sr_U2142_flush;
wire delay_sr_U2144_clk;
wire [15:0] delay_sr_U2144_wdata;
wire [15:0] delay_sr_U2144_rdata;
wire delay_sr_U2144_rst_n;
wire delay_sr_U2144_flush;
assign delay_sr_U2142_clk = clk;
assign delay_sr_U2142_wdata = op_hcompute_grad_x_stencil_write[0];
assign delay_sr_U2142_rst_n = rst_n;
assign delay_sr_U2142_flush = flush;
delay__U2137 delay_sr_U2142 (
    .clk(delay_sr_U2142_clk),
    .wdata(delay_sr_U2142_wdata),
    .rdata(delay_sr_U2142_rdata),
    .rst_n(delay_sr_U2142_rst_n),
    .flush(delay_sr_U2142_flush)
);
assign delay_sr_U2144_clk = clk;
assign delay_sr_U2144_wdata = delay_sr_U2142_rdata;
assign delay_sr_U2144_rst_n = rst_n;
assign delay_sr_U2144_flush = flush;
memtile_long_delay__U2143 delay_sr_U2144 (
    .clk(delay_sr_U2144_clk),
    .wdata(delay_sr_U2144_wdata),
    .rdata(delay_sr_U2144_rdata),
    .rst_n(delay_sr_U2144_rst_n),
    .flush(delay_sr_U2144_flush)
);
assign op_hcompute_lxx_stencil_read[0] = delay_sr_U2142_rdata;
assign op_hcompute_lxy_stencil_read[0] = delay_sr_U2144_rdata;
endmodule

module delay__U2134 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2135_in;
wire _U2135_clk;
assign _U2135_in = wdata;
assign _U2135_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2135 (
    .in(_U2135_in),
    .clk(_U2135_clk),
    .out(rdata)
);
endmodule

module delay__U2131 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2132_in;
wire _U2132_clk;
assign _U2132_in = wdata;
assign _U2132_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2132 (
    .in(_U2132_in),
    .clk(_U2132_clk),
    .out(rdata)
);
endmodule

module delay__U2126 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2127_in;
wire _U2127_clk;
assign _U2127_in = wdata;
assign _U2127_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2127 (
    .in(_U2127_in),
    .clk(_U2127_clk),
    .out(rdata)
);
endmodule

module delay__U2123 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2124_in;
wire _U2124_clk;
assign _U2124_in = wdata;
assign _U2124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2124 (
    .in(_U2124_in),
    .clk(_U2124_clk),
    .out(rdata)
);
endmodule

module delay__U2118 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2119_in;
wire _U2119_clk;
assign _U2119_in = wdata;
assign _U2119_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2119 (
    .in(_U2119_in),
    .clk(_U2119_clk),
    .out(rdata)
);
endmodule

module delay__U2115 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2116_in;
wire _U2116_clk;
assign _U2116_in = wdata;
assign _U2116_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2116 (
    .in(_U2116_in),
    .clk(_U2116_clk),
    .out(rdata)
);
endmodule

module delay__U2109 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2110_in;
wire _U2110_clk;
wire [15:0] _U2110_out;
wire [15:0] _U2111_in;
wire _U2111_clk;
wire [15:0] _U2111_out;
wire [15:0] _U2112_in;
wire _U2112_clk;
wire [15:0] _U2112_out;
wire [15:0] _U2113_in;
wire _U2113_clk;
assign _U2110_in = wdata;
assign _U2110_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2110 (
    .in(_U2110_in),
    .clk(_U2110_clk),
    .out(_U2110_out)
);
assign _U2111_in = _U2110_out;
assign _U2111_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2111 (
    .in(_U2111_in),
    .clk(_U2111_clk),
    .out(_U2111_out)
);
assign _U2112_in = _U2111_out;
assign _U2112_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2112 (
    .in(_U2112_in),
    .clk(_U2112_clk),
    .out(_U2112_out)
);
assign _U2113_in = _U2112_out;
assign _U2113_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2113 (
    .in(_U2113_in),
    .clk(_U2113_clk),
    .out(rdata)
);
endmodule

module delay__U2103 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2104_in;
wire _U2104_clk;
wire [15:0] _U2104_out;
wire [15:0] _U2105_in;
wire _U2105_clk;
wire [15:0] _U2105_out;
wire [15:0] _U2106_in;
wire _U2106_clk;
wire [15:0] _U2106_out;
wire [15:0] _U2107_in;
wire _U2107_clk;
assign _U2104_in = wdata;
assign _U2104_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2104 (
    .in(_U2104_in),
    .clk(_U2104_clk),
    .out(_U2104_out)
);
assign _U2105_in = _U2104_out;
assign _U2105_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2105 (
    .in(_U2105_in),
    .clk(_U2105_clk),
    .out(_U2105_out)
);
assign _U2106_in = _U2105_out;
assign _U2106_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2106 (
    .in(_U2106_in),
    .clk(_U2106_clk),
    .out(_U2106_out)
);
assign _U2107_in = _U2106_out;
assign _U2107_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2107 (
    .in(_U2107_in),
    .clk(_U2107_clk),
    .out(rdata)
);
endmodule

module mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out,
    input en
);
wire reg0_clk;
wire [15:0] reg0_in;
assign reg0_clk = clk;
assign reg0_in = en ? in : out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(reg0_clk),
    .in(reg0_in),
    .out(out)
);
endmodule

module hcompute_lgyy_stencil (
    output [15:0] out_lgyy_stencil
);
assign out_lgyy_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgyy_stencil (
    input clk,
    output [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
hcompute_lgyy_stencil inner_compute (
    .out_lgyy_stencil(inner_compute_out_lgyy_stencil)
);
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil (
    output [15:0] out_lgxy_stencil
);
assign out_lgxy_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgxy_stencil (
    input clk,
    output [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
hcompute_lgxy_stencil inner_compute (
    .out_lgxy_stencil(inner_compute_out_lgxy_stencil)
);
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil (
    output [15:0] out_lgxx_stencil
);
assign out_lgxx_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgxx_stencil (
    input clk,
    output [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
hcompute_lgxx_stencil inner_compute (
    .out_lgxx_stencil(inner_compute_out_lgxx_stencil)
);
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = inner_compute_out_lgxx_stencil;
endmodule

module hcompute_lyy_stencil (
    output [15:0] out_lyy_stencil,
    input [15:0] in0_grad_y_stencil [0:0]
);
assign out_lyy_stencil = ($signed(16'(in0_grad_y_stencil[0] * in0_grad_y_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lyy_stencil (
    input clk,
    input [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0],
    output [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lyy_stencil;
wire [15:0] inner_compute_in0_grad_y_stencil [0:0];
assign inner_compute_in0_grad_y_stencil[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
hcompute_lyy_stencil inner_compute (
    .out_lyy_stencil(inner_compute_out_lyy_stencil),
    .in0_grad_y_stencil(inner_compute_in0_grad_y_stencil)
);
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = inner_compute_out_lyy_stencil;
endmodule

module hcompute_lxy_stencil (
    output [15:0] out_lxy_stencil,
    input [15:0] in0_grad_x_stencil [0:0],
    input [15:0] in1_grad_y_stencil [0:0]
);
assign out_lxy_stencil = ($signed(16'(in0_grad_x_stencil[0] * in1_grad_y_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lxy_stencil (
    input clk,
    input [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0],
    input [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0],
    output [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lxy_stencil;
wire [15:0] inner_compute_in0_grad_x_stencil [0:0];
wire [15:0] inner_compute_in1_grad_y_stencil [0:0];
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
assign inner_compute_in1_grad_y_stencil[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
hcompute_lxy_stencil inner_compute (
    .out_lxy_stencil(inner_compute_out_lxy_stencil),
    .in0_grad_x_stencil(inner_compute_in0_grad_x_stencil),
    .in1_grad_y_stencil(inner_compute_in1_grad_y_stencil)
);
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = inner_compute_out_lxy_stencil;
endmodule

module hcompute_lxx_stencil (
    output [15:0] out_lxx_stencil,
    input [15:0] in0_grad_x_stencil [0:0]
);
assign out_lxx_stencil = ($signed(16'(in0_grad_x_stencil[0] * in0_grad_x_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lxx_stencil (
    input clk,
    input [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0],
    output [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lxx_stencil;
wire [15:0] inner_compute_in0_grad_x_stencil [0:0];
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
hcompute_lxx_stencil inner_compute (
    .out_lxx_stencil(inner_compute_out_lxx_stencil),
    .in0_grad_x_stencil(inner_compute_in0_grad_x_stencil)
);
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = inner_compute_out_lxx_stencil;
endmodule

module hcompute_lgyy_stencil_1 (
    output [15:0] out_lgyy_stencil,
    input [15:0] in0_lgyy_stencil [0:0],
    input [15:0] in1_lyy_stencil [8:0]
);
assign out_lgyy_stencil = 16'(in1_lyy_stencil[0] + (16'(in0_lgyy_stencil[0] + (16'(in1_lyy_stencil[1] + (16'(in1_lyy_stencil[2] + (16'(in1_lyy_stencil[3] + (16'(in1_lyy_stencil[4] + (16'(in1_lyy_stencil[5] + (16'(in1_lyy_stencil[6] + (16'(in1_lyy_stencil[7] + in1_lyy_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgyy_stencil_1 (
    input clk,
    input [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0],
    input [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0],
    output [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
wire [15:0] inner_compute_in0_lgyy_stencil [0:0];
wire [15:0] inner_compute_in1_lyy_stencil [8:0];
assign inner_compute_in0_lgyy_stencil[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
assign inner_compute_in1_lyy_stencil[8] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[8];
assign inner_compute_in1_lyy_stencil[7] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[7];
assign inner_compute_in1_lyy_stencil[6] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[6];
assign inner_compute_in1_lyy_stencil[5] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[5];
assign inner_compute_in1_lyy_stencil[4] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[4];
assign inner_compute_in1_lyy_stencil[3] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[3];
assign inner_compute_in1_lyy_stencil[2] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[2];
assign inner_compute_in1_lyy_stencil[1] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[1];
assign inner_compute_in1_lyy_stencil[0] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[0];
hcompute_lgyy_stencil_1 inner_compute (
    .out_lgyy_stencil(inner_compute_out_lgyy_stencil),
    .in0_lgyy_stencil(inner_compute_in0_lgyy_stencil),
    .in1_lyy_stencil(inner_compute_in1_lyy_stencil)
);
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil_1 (
    output [15:0] out_lgxy_stencil,
    input [15:0] in0_lgxy_stencil [0:0],
    input [15:0] in1_lxy_stencil [8:0]
);
assign out_lgxy_stencil = 16'(in1_lxy_stencil[0] + (16'(in0_lgxy_stencil[0] + (16'(in1_lxy_stencil[1] + (16'(in1_lxy_stencil[2] + (16'(in1_lxy_stencil[3] + (16'(in1_lxy_stencil[4] + (16'(in1_lxy_stencil[5] + (16'(in1_lxy_stencil[6] + (16'(in1_lxy_stencil[7] + in1_lxy_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgxy_stencil_1 (
    input clk,
    input [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0],
    input [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0],
    output [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
wire [15:0] inner_compute_in0_lgxy_stencil [0:0];
wire [15:0] inner_compute_in1_lxy_stencil [8:0];
assign inner_compute_in0_lgxy_stencil[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
assign inner_compute_in1_lxy_stencil[8] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[8];
assign inner_compute_in1_lxy_stencil[7] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[7];
assign inner_compute_in1_lxy_stencil[6] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[6];
assign inner_compute_in1_lxy_stencil[5] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[5];
assign inner_compute_in1_lxy_stencil[4] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[4];
assign inner_compute_in1_lxy_stencil[3] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[3];
assign inner_compute_in1_lxy_stencil[2] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[2];
assign inner_compute_in1_lxy_stencil[1] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[1];
assign inner_compute_in1_lxy_stencil[0] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[0];
hcompute_lgxy_stencil_1 inner_compute (
    .out_lgxy_stencil(inner_compute_out_lgxy_stencil),
    .in0_lgxy_stencil(inner_compute_in0_lgxy_stencil),
    .in1_lxy_stencil(inner_compute_in1_lxy_stencil)
);
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil_1 (
    output [15:0] out_lgxx_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lxx_stencil [8:0]
);
assign out_lgxx_stencil = 16'(in1_lxx_stencil[0] + (16'(in0_lgxx_stencil[0] + (16'(in1_lxx_stencil[1] + (16'(in1_lxx_stencil[2] + (16'(in1_lxx_stencil[3] + (16'(in1_lxx_stencil[4] + (16'(in1_lxx_stencil[5] + (16'(in1_lxx_stencil[6] + (16'(in1_lxx_stencil[7] + in1_lxx_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgxx_stencil_1 (
    input clk,
    input [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0],
    input [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0],
    output [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
wire [15:0] inner_compute_in0_lgxx_stencil [0:0];
wire [15:0] inner_compute_in1_lxx_stencil [8:0];
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
assign inner_compute_in1_lxx_stencil[8] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[8];
assign inner_compute_in1_lxx_stencil[7] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[7];
assign inner_compute_in1_lxx_stencil[6] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[6];
assign inner_compute_in1_lxx_stencil[5] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[5];
assign inner_compute_in1_lxx_stencil[4] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[4];
assign inner_compute_in1_lxx_stencil[3] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[3];
assign inner_compute_in1_lxx_stencil[2] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[2];
assign inner_compute_in1_lxx_stencil[1] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[1];
assign inner_compute_in1_lxx_stencil[0] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[0];
hcompute_lgxx_stencil_1 inner_compute (
    .out_lgxx_stencil(inner_compute_out_lgxx_stencil),
    .in0_lgxx_stencil(inner_compute_in0_lgxx_stencil),
    .in1_lxx_stencil(inner_compute_in1_lxx_stencil)
);
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = inner_compute_out_lgxx_stencil;
endmodule

module hcompute_cim_stencil (
    output [15:0] out_cim_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lgxy_stencil [0:0],
    input [15:0] in2_lgyy_stencil [0:0]
);
wire [15:0] add_529_530_535_out;
wire [15:0] ashr_lgxx_stencil_2_528_529_out;
wire [15:0] ashr_lgxy_stencil_2_528_532_out;
wire [15:0] ashr_lgyy_stencil_2_528_530_out;
assign add_529_530_535_out = 16'(ashr_lgxx_stencil_2_528_529_out + ashr_lgyy_stencil_2_528_530_out);
assign ashr_lgxx_stencil_2_528_529_out = ($signed(in0_lgxx_stencil[0])) >>> 16'h0006;
assign ashr_lgxy_stencil_2_528_532_out = ($signed(in1_lgxy_stencil[0])) >>> 16'h0006;
assign ashr_lgyy_stencil_2_528_530_out = ($signed(in2_lgyy_stencil[0])) >>> 16'h0006;
assign out_cim_stencil = 16'((16'((16'(ashr_lgxx_stencil_2_528_529_out * ashr_lgyy_stencil_2_528_530_out)) - (16'(ashr_lgxy_stencil_2_528_532_out * ashr_lgxy_stencil_2_528_532_out)))) - (($signed(16'(add_529_530_535_out * add_529_530_535_out))) >>> 16'h0004));
endmodule

module cu_op_hcompute_cim_stencil (
    input clk,
    input [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0],
    input [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0],
    input [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0],
    output [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0]
);
wire [15:0] inner_compute_out_cim_stencil;
wire [15:0] inner_compute_in0_lgxx_stencil [0:0];
wire [15:0] inner_compute_in1_lgxy_stencil [0:0];
wire [15:0] inner_compute_in2_lgyy_stencil [0:0];
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
assign inner_compute_in1_lgxy_stencil[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
assign inner_compute_in2_lgyy_stencil[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
hcompute_cim_stencil inner_compute (
    .out_cim_stencil(inner_compute_out_cim_stencil),
    .in0_lgxx_stencil(inner_compute_in0_lgxx_stencil),
    .in1_lgxy_stencil(inner_compute_in1_lgxy_stencil),
    .in2_lgyy_stencil(inner_compute_in2_lgyy_stencil)
);
assign cim_stencil_op_hcompute_cim_stencil_write[0] = inner_compute_out_cim_stencil;
endmodule

module corebit_reg #(
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input in,
    output out
);
reg outReg = init;
always @(posedge clk) begin
  outReg <= in;
end
assign out = outReg;
endmodule

module hcompute_cim_output_stencil (
    output [15:0] out_cim_output_stencil,
    input [15:0] in0_cim_stencil [8:0]
);
assign out_cim_output_stencil = ((((((((($signed(in0_cim_stencil[0])) < ($signed(in0_cim_stencil[1]))) & (($signed(in0_cim_stencil[2])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[3])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[4])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[5])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[6])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[7])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[8])) < ($signed(in0_cim_stencil[1])))) & (($signed(16'h0001)) <= ($signed(in0_cim_stencil[1]))) ? 16'h00ff : 16'h0000;
endmodule

module cu_op_hcompute_cim_output_stencil (
    input clk,
    input [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0],
    output [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_cim_output_stencil;
wire [15:0] inner_compute_in0_cim_stencil [8:0];
assign inner_compute_in0_cim_stencil[8] = cim_stencil_op_hcompute_cim_output_stencil_read[8];
assign inner_compute_in0_cim_stencil[7] = cim_stencil_op_hcompute_cim_output_stencil_read[7];
assign inner_compute_in0_cim_stencil[6] = cim_stencil_op_hcompute_cim_output_stencil_read[6];
assign inner_compute_in0_cim_stencil[5] = cim_stencil_op_hcompute_cim_output_stencil_read[5];
assign inner_compute_in0_cim_stencil[4] = cim_stencil_op_hcompute_cim_output_stencil_read[4];
assign inner_compute_in0_cim_stencil[3] = cim_stencil_op_hcompute_cim_output_stencil_read[3];
assign inner_compute_in0_cim_stencil[2] = cim_stencil_op_hcompute_cim_output_stencil_read[2];
assign inner_compute_in0_cim_stencil[1] = cim_stencil_op_hcompute_cim_output_stencil_read[1];
assign inner_compute_in0_cim_stencil[0] = cim_stencil_op_hcompute_cim_output_stencil_read[0];
hcompute_cim_output_stencil inner_compute (
    .out_cim_output_stencil(inner_compute_out_cim_output_stencil),
    .in0_cim_stencil(inner_compute_in0_cim_stencil)
);
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = inner_compute_out_cim_output_stencil;
endmodule

module commonlib_smin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) <= ($signed(in1)) ? in0 : in1;
endmodule

module commonlib_smax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) >= ($signed(in1)) ? in0 : in1;
endmodule

module hcompute_grad_y_stencil (
    output [15:0] out_grad_y_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_382_383_384_in0;
wire [15:0] smax_382_383_384_in1;
wire [15:0] smin_380_381_382_in0;
wire [15:0] smin_380_381_382_in1;
wire [15:0] smin_380_381_382_out;
assign smax_382_383_384_in0 = smin_380_381_382_out;
assign smax_382_383_384_in1 = 16'hff01;
commonlib_smax__width16 smax_382_383_384 (
    .in0(smax_382_383_384_in0),
    .in1(smax_382_383_384_in1),
    .out(out_grad_y_stencil)
);
assign smin_380_381_382_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[3] + (16'(in0_padded16_global_wrapper_stencil[4] + (16'(in0_padded16_global_wrapper_stencil[5] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[0])) - (16'(in0_padded16_global_wrapper_stencil[1] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[2]);
assign smin_380_381_382_in1 = 16'h00ff;
commonlib_smin__width16 smin_380_381_382 (
    .in0(smin_380_381_382_in0),
    .in1(smin_380_381_382_in1),
    .out(smin_380_381_382_out)
);
endmodule

module cu_op_hcompute_grad_y_stencil (
    input clk,
    input [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0],
    output [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0]
);
wire [15:0] inner_compute_out_grad_y_stencil;
wire [15:0] inner_compute_in0_padded16_global_wrapper_stencil [5:0];
assign inner_compute_in0_padded16_global_wrapper_stencil[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign inner_compute_in0_padded16_global_wrapper_stencil[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign inner_compute_in0_padded16_global_wrapper_stencil[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign inner_compute_in0_padded16_global_wrapper_stencil[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign inner_compute_in0_padded16_global_wrapper_stencil[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign inner_compute_in0_padded16_global_wrapper_stencil[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
hcompute_grad_y_stencil inner_compute (
    .out_grad_y_stencil(inner_compute_out_grad_y_stencil),
    .in0_padded16_global_wrapper_stencil(inner_compute_in0_padded16_global_wrapper_stencil)
);
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = inner_compute_out_grad_y_stencil;
endmodule

module hcompute_grad_x_stencil (
    output [15:0] out_grad_x_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_282_283_284_in0;
wire [15:0] smax_282_283_284_in1;
wire [15:0] smin_280_281_282_in0;
wire [15:0] smin_280_281_282_in1;
wire [15:0] smin_280_281_282_out;
assign smax_282_283_284_in0 = smin_280_281_282_out;
assign smax_282_283_284_in1 = 16'hff01;
commonlib_smax__width16 smax_282_283_284 (
    .in0(smax_282_283_284_in0),
    .in1(smax_282_283_284_in1),
    .out(out_grad_x_stencil)
);
assign smin_280_281_282_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[0] + (16'(in0_padded16_global_wrapper_stencil[1] + (16'(in0_padded16_global_wrapper_stencil[2] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[3])) - (16'(in0_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[5]);
assign smin_280_281_282_in1 = 16'h00ff;
commonlib_smin__width16 smin_280_281_282 (
    .in0(smin_280_281_282_in0),
    .in1(smin_280_281_282_in1),
    .out(smin_280_281_282_out)
);
endmodule

module cu_op_hcompute_grad_x_stencil (
    input clk,
    input [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0],
    output [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0]
);
wire [15:0] inner_compute_out_grad_x_stencil;
wire [15:0] inner_compute_in0_padded16_global_wrapper_stencil [5:0];
assign inner_compute_in0_padded16_global_wrapper_stencil[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign inner_compute_in0_padded16_global_wrapper_stencil[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign inner_compute_in0_padded16_global_wrapper_stencil[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign inner_compute_in0_padded16_global_wrapper_stencil[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign inner_compute_in0_padded16_global_wrapper_stencil[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign inner_compute_in0_padded16_global_wrapper_stencil[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
hcompute_grad_x_stencil inner_compute (
    .out_grad_x_stencil(inner_compute_out_grad_x_stencil),
    .in0_padded16_global_wrapper_stencil(inner_compute_in0_padded16_global_wrapper_stencil)
);
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = inner_compute_out_grad_x_stencil;
endmodule

module cim_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_output_stencil_read_ren,
    input [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_output_stencil_read [8:0],
    input op_hcompute_cim_stencil_write_wen,
    input [15:0] op_hcompute_cim_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_cim_stencil_write [0:0]
);
wire delay_sr_U2114_clk;
wire [15:0] delay_sr_U2114_wdata;
wire [15:0] delay_sr_U2114_rdata;
wire delay_sr_U2114_rst_n;
wire delay_sr_U2114_flush;
wire delay_sr_U2117_clk;
wire [15:0] delay_sr_U2117_wdata;
wire [15:0] delay_sr_U2117_rdata;
wire delay_sr_U2117_rst_n;
wire delay_sr_U2117_flush;
wire delay_sr_U2120_clk;
wire [15:0] delay_sr_U2120_wdata;
wire [15:0] delay_sr_U2120_rdata;
wire delay_sr_U2120_rst_n;
wire delay_sr_U2120_flush;
wire delay_sr_U2122_clk;
wire [15:0] delay_sr_U2122_wdata;
wire [15:0] delay_sr_U2122_rdata;
wire delay_sr_U2122_rst_n;
wire delay_sr_U2122_flush;
wire delay_sr_U2125_clk;
wire [15:0] delay_sr_U2125_wdata;
wire [15:0] delay_sr_U2125_rdata;
wire delay_sr_U2125_rst_n;
wire delay_sr_U2125_flush;
wire delay_sr_U2128_clk;
wire [15:0] delay_sr_U2128_wdata;
wire [15:0] delay_sr_U2128_rdata;
wire delay_sr_U2128_rst_n;
wire delay_sr_U2128_flush;
wire delay_sr_U2130_clk;
wire [15:0] delay_sr_U2130_wdata;
wire [15:0] delay_sr_U2130_rdata;
wire delay_sr_U2130_rst_n;
wire delay_sr_U2130_flush;
wire delay_sr_U2133_clk;
wire [15:0] delay_sr_U2133_wdata;
wire [15:0] delay_sr_U2133_rdata;
wire delay_sr_U2133_rst_n;
wire delay_sr_U2133_flush;
wire delay_sr_U2136_clk;
wire [15:0] delay_sr_U2136_wdata;
wire [15:0] delay_sr_U2136_rdata;
wire delay_sr_U2136_rst_n;
wire delay_sr_U2136_flush;
assign delay_sr_U2114_clk = clk;
assign delay_sr_U2114_wdata = op_hcompute_cim_stencil_write[0];
assign delay_sr_U2114_rst_n = rst_n;
assign delay_sr_U2114_flush = flush;
delay__U2109 delay_sr_U2114 (
    .clk(delay_sr_U2114_clk),
    .wdata(delay_sr_U2114_wdata),
    .rdata(delay_sr_U2114_rdata),
    .rst_n(delay_sr_U2114_rst_n),
    .flush(delay_sr_U2114_flush)
);
assign delay_sr_U2117_clk = clk;
assign delay_sr_U2117_wdata = delay_sr_U2114_rdata;
assign delay_sr_U2117_rst_n = rst_n;
assign delay_sr_U2117_flush = flush;
delay__U2115 delay_sr_U2117 (
    .clk(delay_sr_U2117_clk),
    .wdata(delay_sr_U2117_wdata),
    .rdata(delay_sr_U2117_rdata),
    .rst_n(delay_sr_U2117_rst_n),
    .flush(delay_sr_U2117_flush)
);
assign delay_sr_U2120_clk = clk;
assign delay_sr_U2120_wdata = delay_sr_U2117_rdata;
assign delay_sr_U2120_rst_n = rst_n;
assign delay_sr_U2120_flush = flush;
delay__U2118 delay_sr_U2120 (
    .clk(delay_sr_U2120_clk),
    .wdata(delay_sr_U2120_wdata),
    .rdata(delay_sr_U2120_rdata),
    .rst_n(delay_sr_U2120_rst_n),
    .flush(delay_sr_U2120_flush)
);
assign delay_sr_U2122_clk = clk;
assign delay_sr_U2122_wdata = delay_sr_U2120_rdata;
assign delay_sr_U2122_rst_n = rst_n;
assign delay_sr_U2122_flush = flush;
memtile_long_delay__U2121 delay_sr_U2122 (
    .clk(delay_sr_U2122_clk),
    .wdata(delay_sr_U2122_wdata),
    .rdata(delay_sr_U2122_rdata),
    .rst_n(delay_sr_U2122_rst_n),
    .flush(delay_sr_U2122_flush)
);
assign delay_sr_U2125_clk = clk;
assign delay_sr_U2125_wdata = delay_sr_U2122_rdata;
assign delay_sr_U2125_rst_n = rst_n;
assign delay_sr_U2125_flush = flush;
delay__U2123 delay_sr_U2125 (
    .clk(delay_sr_U2125_clk),
    .wdata(delay_sr_U2125_wdata),
    .rdata(delay_sr_U2125_rdata),
    .rst_n(delay_sr_U2125_rst_n),
    .flush(delay_sr_U2125_flush)
);
assign delay_sr_U2128_clk = clk;
assign delay_sr_U2128_wdata = delay_sr_U2125_rdata;
assign delay_sr_U2128_rst_n = rst_n;
assign delay_sr_U2128_flush = flush;
delay__U2126 delay_sr_U2128 (
    .clk(delay_sr_U2128_clk),
    .wdata(delay_sr_U2128_wdata),
    .rdata(delay_sr_U2128_rdata),
    .rst_n(delay_sr_U2128_rst_n),
    .flush(delay_sr_U2128_flush)
);
assign delay_sr_U2130_clk = clk;
assign delay_sr_U2130_wdata = delay_sr_U2128_rdata;
assign delay_sr_U2130_rst_n = rst_n;
assign delay_sr_U2130_flush = flush;
memtile_long_delay__U2129 delay_sr_U2130 (
    .clk(delay_sr_U2130_clk),
    .wdata(delay_sr_U2130_wdata),
    .rdata(delay_sr_U2130_rdata),
    .rst_n(delay_sr_U2130_rst_n),
    .flush(delay_sr_U2130_flush)
);
assign delay_sr_U2133_clk = clk;
assign delay_sr_U2133_wdata = delay_sr_U2130_rdata;
assign delay_sr_U2133_rst_n = rst_n;
assign delay_sr_U2133_flush = flush;
delay__U2131 delay_sr_U2133 (
    .clk(delay_sr_U2133_clk),
    .wdata(delay_sr_U2133_wdata),
    .rdata(delay_sr_U2133_rdata),
    .rst_n(delay_sr_U2133_rst_n),
    .flush(delay_sr_U2133_flush)
);
assign delay_sr_U2136_clk = clk;
assign delay_sr_U2136_wdata = delay_sr_U2133_rdata;
assign delay_sr_U2136_rst_n = rst_n;
assign delay_sr_U2136_flush = flush;
delay__U2134 delay_sr_U2136 (
    .clk(delay_sr_U2136_clk),
    .wdata(delay_sr_U2136_wdata),
    .rdata(delay_sr_U2136_rdata),
    .rst_n(delay_sr_U2136_rst_n),
    .flush(delay_sr_U2136_flush)
);
assign op_hcompute_cim_output_stencil_read[8] = delay_sr_U2114_rdata;
assign op_hcompute_cim_output_stencil_read[7] = delay_sr_U2117_rdata;
assign op_hcompute_cim_output_stencil_read[6] = delay_sr_U2120_rdata;
assign op_hcompute_cim_output_stencil_read[5] = delay_sr_U2122_rdata;
assign op_hcompute_cim_output_stencil_read[4] = delay_sr_U2128_rdata;
assign op_hcompute_cim_output_stencil_read[3] = delay_sr_U2130_rdata;
assign op_hcompute_cim_output_stencil_read[2] = delay_sr_U2133_rdata;
assign op_hcompute_cim_output_stencil_read[1] = delay_sr_U2125_rdata;
assign op_hcompute_cim_output_stencil_read[0] = delay_sr_U2136_rdata;
endmodule

module cim_output_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_output_stencil_write_wen,
    input [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_cim_output_stencil_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U2108_clk;
wire [15:0] delay_sr_U2108_wdata;
wire [15:0] delay_sr_U2108_rdata;
wire delay_sr_U2108_rst_n;
wire delay_sr_U2108_flush;
assign delay_sr_U2108_clk = clk;
assign delay_sr_U2108_wdata = op_hcompute_cim_output_stencil_write[0];
assign delay_sr_U2108_rst_n = rst_n;
assign delay_sr_U2108_flush = flush;
delay__U2103 delay_sr_U2108 (
    .clk(delay_sr_U2108_clk),
    .wdata(delay_sr_U2108_wdata),
    .rdata(delay_sr_U2108_rdata),
    .rst_n(delay_sr_U2108_rst_n),
    .flush(delay_sr_U2108_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U2108_rdata;
endmodule

module array_delay_U2099 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2100_in;
wire _U2100_clk;
wire [15:0] _U2100_out;
wire [15:0] _U2101_in;
wire _U2101_clk;
wire [15:0] _U2101_out;
wire [15:0] _U2102_in;
wire _U2102_clk;
wire [15:0] _U2102_out;
assign _U2100_in = in[0];
assign _U2100_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2100 (
    .in(_U2100_in),
    .clk(_U2100_clk),
    .out(_U2100_out)
);
assign _U2101_in = in[1];
assign _U2101_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2101 (
    .in(_U2101_in),
    .clk(_U2101_clk),
    .out(_U2101_out)
);
assign _U2102_in = in[2];
assign _U2102_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2102 (
    .in(_U2102_in),
    .clk(_U2102_clk),
    .out(_U2102_out)
);
assign out[2] = _U2102_out;
assign out[1] = _U2101_out;
assign out[0] = _U2100_out;
endmodule

module array_delay_U2095 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2096_in;
wire _U2096_clk;
wire [15:0] _U2096_out;
wire [15:0] _U2097_in;
wire _U2097_clk;
wire [15:0] _U2097_out;
wire [15:0] _U2098_in;
wire _U2098_clk;
wire [15:0] _U2098_out;
assign _U2096_in = in[0];
assign _U2096_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2096 (
    .in(_U2096_in),
    .clk(_U2096_clk),
    .out(_U2096_out)
);
assign _U2097_in = in[1];
assign _U2097_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2097 (
    .in(_U2097_in),
    .clk(_U2097_clk),
    .out(_U2097_out)
);
assign _U2098_in = in[2];
assign _U2098_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2098 (
    .in(_U2098_in),
    .clk(_U2098_clk),
    .out(_U2098_out)
);
assign out[2] = _U2098_out;
assign out[1] = _U2097_out;
assign out[0] = _U2096_out;
endmodule

module array_delay_U2074 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2075_in;
wire _U2075_clk;
wire [15:0] _U2075_out;
wire [15:0] _U2076_in;
wire _U2076_clk;
wire [15:0] _U2076_out;
wire [15:0] _U2077_in;
wire _U2077_clk;
wire [15:0] _U2077_out;
assign _U2075_in = in[0];
assign _U2075_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2075 (
    .in(_U2075_in),
    .clk(_U2075_clk),
    .out(_U2075_out)
);
assign _U2076_in = in[1];
assign _U2076_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2076 (
    .in(_U2076_in),
    .clk(_U2076_clk),
    .out(_U2076_out)
);
assign _U2077_in = in[2];
assign _U2077_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2077 (
    .in(_U2077_in),
    .clk(_U2077_clk),
    .out(_U2077_out)
);
assign out[2] = _U2077_out;
assign out[1] = _U2076_out;
assign out[0] = _U2075_out;
endmodule

module array_delay_U2070 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2071_in;
wire _U2071_clk;
wire [15:0] _U2071_out;
wire [15:0] _U2072_in;
wire _U2072_clk;
wire [15:0] _U2072_out;
wire [15:0] _U2073_in;
wire _U2073_clk;
wire [15:0] _U2073_out;
assign _U2071_in = in[0];
assign _U2071_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2071 (
    .in(_U2071_in),
    .clk(_U2071_clk),
    .out(_U2071_out)
);
assign _U2072_in = in[1];
assign _U2072_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2072 (
    .in(_U2072_in),
    .clk(_U2072_clk),
    .out(_U2072_out)
);
assign _U2073_in = in[2];
assign _U2073_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2073 (
    .in(_U2073_in),
    .clk(_U2073_clk),
    .out(_U2073_out)
);
assign out[2] = _U2073_out;
assign out[1] = _U2072_out;
assign out[0] = _U2071_out;
endmodule

module array_delay_U2049 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2050_in;
wire _U2050_clk;
wire [15:0] _U2050_out;
wire [15:0] _U2051_in;
wire _U2051_clk;
wire [15:0] _U2051_out;
wire [15:0] _U2052_in;
wire _U2052_clk;
wire [15:0] _U2052_out;
assign _U2050_in = in[0];
assign _U2050_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2050 (
    .in(_U2050_in),
    .clk(_U2050_clk),
    .out(_U2050_out)
);
assign _U2051_in = in[1];
assign _U2051_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2051 (
    .in(_U2051_in),
    .clk(_U2051_clk),
    .out(_U2051_out)
);
assign _U2052_in = in[2];
assign _U2052_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2052 (
    .in(_U2052_in),
    .clk(_U2052_clk),
    .out(_U2052_out)
);
assign out[2] = _U2052_out;
assign out[1] = _U2051_out;
assign out[0] = _U2050_out;
endmodule

module array_delay_U2045 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2046_in;
wire _U2046_clk;
wire [15:0] _U2046_out;
wire [15:0] _U2047_in;
wire _U2047_clk;
wire [15:0] _U2047_out;
wire [15:0] _U2048_in;
wire _U2048_clk;
wire [15:0] _U2048_out;
assign _U2046_in = in[0];
assign _U2046_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2046 (
    .in(_U2046_in),
    .clk(_U2046_clk),
    .out(_U2046_out)
);
assign _U2047_in = in[1];
assign _U2047_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2047 (
    .in(_U2047_in),
    .clk(_U2047_clk),
    .out(_U2047_out)
);
assign _U2048_in = in[2];
assign _U2048_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2048 (
    .in(_U2048_in),
    .clk(_U2048_clk),
    .out(_U2048_out)
);
assign out[2] = _U2048_out;
assign out[1] = _U2047_out;
assign out[0] = _U2046_out;
endmodule

module array_delay_U2024 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2025_in;
wire _U2025_clk;
wire [15:0] _U2025_out;
wire [15:0] _U2026_in;
wire _U2026_clk;
wire [15:0] _U2026_out;
wire [15:0] _U2027_in;
wire _U2027_clk;
wire [15:0] _U2027_out;
assign _U2025_in = in[0];
assign _U2025_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2025 (
    .in(_U2025_in),
    .clk(_U2025_clk),
    .out(_U2025_out)
);
assign _U2026_in = in[1];
assign _U2026_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2026 (
    .in(_U2026_in),
    .clk(_U2026_clk),
    .out(_U2026_out)
);
assign _U2027_in = in[2];
assign _U2027_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2027 (
    .in(_U2027_in),
    .clk(_U2027_clk),
    .out(_U2027_out)
);
assign out[2] = _U2027_out;
assign out[1] = _U2026_out;
assign out[0] = _U2025_out;
endmodule

module array_delay_U2020 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2021_in;
wire _U2021_clk;
wire [15:0] _U2021_out;
wire [15:0] _U2022_in;
wire _U2022_clk;
wire [15:0] _U2022_out;
wire [15:0] _U2023_in;
wire _U2023_clk;
wire [15:0] _U2023_out;
assign _U2021_in = in[0];
assign _U2021_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2021 (
    .in(_U2021_in),
    .clk(_U2021_clk),
    .out(_U2021_out)
);
assign _U2022_in = in[1];
assign _U2022_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2022 (
    .in(_U2022_in),
    .clk(_U2022_clk),
    .out(_U2022_out)
);
assign _U2023_in = in[2];
assign _U2023_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2023 (
    .in(_U2023_in),
    .clk(_U2023_clk),
    .out(_U2023_out)
);
assign out[2] = _U2023_out;
assign out[1] = _U2022_out;
assign out[0] = _U2021_out;
endmodule

module array_delay_U1999 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2000_in;
wire _U2000_clk;
wire [15:0] _U2000_out;
wire [15:0] _U2001_in;
wire _U2001_clk;
wire [15:0] _U2001_out;
wire [15:0] _U2002_in;
wire _U2002_clk;
wire [15:0] _U2002_out;
assign _U2000_in = in[0];
assign _U2000_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2000 (
    .in(_U2000_in),
    .clk(_U2000_clk),
    .out(_U2000_out)
);
assign _U2001_in = in[1];
assign _U2001_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2001 (
    .in(_U2001_in),
    .clk(_U2001_clk),
    .out(_U2001_out)
);
assign _U2002_in = in[2];
assign _U2002_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2002 (
    .in(_U2002_in),
    .clk(_U2002_clk),
    .out(_U2002_out)
);
assign out[2] = _U2002_out;
assign out[1] = _U2001_out;
assign out[0] = _U2000_out;
endmodule

module array_delay_U1995 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1996_in;
wire _U1996_clk;
wire [15:0] _U1996_out;
wire [15:0] _U1997_in;
wire _U1997_clk;
wire [15:0] _U1997_out;
wire [15:0] _U1998_in;
wire _U1998_clk;
wire [15:0] _U1998_out;
assign _U1996_in = in[0];
assign _U1996_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1996 (
    .in(_U1996_in),
    .clk(_U1996_clk),
    .out(_U1996_out)
);
assign _U1997_in = in[1];
assign _U1997_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1997 (
    .in(_U1997_in),
    .clk(_U1997_clk),
    .out(_U1997_out)
);
assign _U1998_in = in[2];
assign _U1998_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1998 (
    .in(_U1998_in),
    .clk(_U1998_clk),
    .out(_U1998_out)
);
assign out[2] = _U1998_out;
assign out[1] = _U1997_out;
assign out[0] = _U1996_out;
endmodule

module array_delay_U1974 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1975_in;
wire _U1975_clk;
wire [15:0] _U1975_out;
wire [15:0] _U1976_in;
wire _U1976_clk;
wire [15:0] _U1976_out;
wire [15:0] _U1977_in;
wire _U1977_clk;
wire [15:0] _U1977_out;
assign _U1975_in = in[0];
assign _U1975_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1975 (
    .in(_U1975_in),
    .clk(_U1975_clk),
    .out(_U1975_out)
);
assign _U1976_in = in[1];
assign _U1976_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1976 (
    .in(_U1976_in),
    .clk(_U1976_clk),
    .out(_U1976_out)
);
assign _U1977_in = in[2];
assign _U1977_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1977 (
    .in(_U1977_in),
    .clk(_U1977_clk),
    .out(_U1977_out)
);
assign out[2] = _U1977_out;
assign out[1] = _U1976_out;
assign out[0] = _U1975_out;
endmodule

module array_delay_U1970 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1971_in;
wire _U1971_clk;
wire [15:0] _U1971_out;
wire [15:0] _U1972_in;
wire _U1972_clk;
wire [15:0] _U1972_out;
wire [15:0] _U1973_in;
wire _U1973_clk;
wire [15:0] _U1973_out;
assign _U1971_in = in[0];
assign _U1971_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1971 (
    .in(_U1971_in),
    .clk(_U1971_clk),
    .out(_U1971_out)
);
assign _U1972_in = in[1];
assign _U1972_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1972 (
    .in(_U1972_in),
    .clk(_U1972_clk),
    .out(_U1972_out)
);
assign _U1973_in = in[2];
assign _U1973_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1973 (
    .in(_U1973_in),
    .clk(_U1973_clk),
    .out(_U1973_out)
);
assign out[2] = _U1973_out;
assign out[1] = _U1972_out;
assign out[0] = _U1971_out;
endmodule

module array_delay_U1949 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1950_in;
wire _U1950_clk;
wire [15:0] _U1950_out;
wire [15:0] _U1951_in;
wire _U1951_clk;
wire [15:0] _U1951_out;
wire [15:0] _U1952_in;
wire _U1952_clk;
wire [15:0] _U1952_out;
assign _U1950_in = in[0];
assign _U1950_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1950 (
    .in(_U1950_in),
    .clk(_U1950_clk),
    .out(_U1950_out)
);
assign _U1951_in = in[1];
assign _U1951_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1951 (
    .in(_U1951_in),
    .clk(_U1951_clk),
    .out(_U1951_out)
);
assign _U1952_in = in[2];
assign _U1952_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1952 (
    .in(_U1952_in),
    .clk(_U1952_clk),
    .out(_U1952_out)
);
assign out[2] = _U1952_out;
assign out[1] = _U1951_out;
assign out[0] = _U1950_out;
endmodule

module array_delay_U1945 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1946_in;
wire _U1946_clk;
wire [15:0] _U1946_out;
wire [15:0] _U1947_in;
wire _U1947_clk;
wire [15:0] _U1947_out;
wire [15:0] _U1948_in;
wire _U1948_clk;
wire [15:0] _U1948_out;
assign _U1946_in = in[0];
assign _U1946_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1946 (
    .in(_U1946_in),
    .clk(_U1946_clk),
    .out(_U1946_out)
);
assign _U1947_in = in[1];
assign _U1947_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1947 (
    .in(_U1947_in),
    .clk(_U1947_clk),
    .out(_U1947_out)
);
assign _U1948_in = in[2];
assign _U1948_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1948 (
    .in(_U1948_in),
    .clk(_U1948_clk),
    .out(_U1948_out)
);
assign out[2] = _U1948_out;
assign out[1] = _U1947_out;
assign out[0] = _U1946_out;
endmodule

module array_delay_U1924 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1925_in;
wire _U1925_clk;
wire [15:0] _U1925_out;
wire [15:0] _U1926_in;
wire _U1926_clk;
wire [15:0] _U1926_out;
wire [15:0] _U1927_in;
wire _U1927_clk;
wire [15:0] _U1927_out;
assign _U1925_in = in[0];
assign _U1925_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1925 (
    .in(_U1925_in),
    .clk(_U1925_clk),
    .out(_U1925_out)
);
assign _U1926_in = in[1];
assign _U1926_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1926 (
    .in(_U1926_in),
    .clk(_U1926_clk),
    .out(_U1926_out)
);
assign _U1927_in = in[2];
assign _U1927_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1927 (
    .in(_U1927_in),
    .clk(_U1927_clk),
    .out(_U1927_out)
);
assign out[2] = _U1927_out;
assign out[1] = _U1926_out;
assign out[0] = _U1925_out;
endmodule

module array_delay_U1920 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1921_in;
wire _U1921_clk;
wire [15:0] _U1921_out;
wire [15:0] _U1922_in;
wire _U1922_clk;
wire [15:0] _U1922_out;
wire [15:0] _U1923_in;
wire _U1923_clk;
wire [15:0] _U1923_out;
assign _U1921_in = in[0];
assign _U1921_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1921 (
    .in(_U1921_in),
    .clk(_U1921_clk),
    .out(_U1921_out)
);
assign _U1922_in = in[1];
assign _U1922_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1922 (
    .in(_U1922_in),
    .clk(_U1922_clk),
    .out(_U1922_out)
);
assign _U1923_in = in[2];
assign _U1923_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1923 (
    .in(_U1923_in),
    .clk(_U1923_clk),
    .out(_U1923_out)
);
assign out[2] = _U1923_out;
assign out[1] = _U1922_out;
assign out[0] = _U1921_out;
endmodule

module array_delay_U1899 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1900_in;
wire _U1900_clk;
wire [15:0] _U1900_out;
wire [15:0] _U1901_in;
wire _U1901_clk;
wire [15:0] _U1901_out;
wire [15:0] _U1902_in;
wire _U1902_clk;
wire [15:0] _U1902_out;
assign _U1900_in = in[0];
assign _U1900_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1900 (
    .in(_U1900_in),
    .clk(_U1900_clk),
    .out(_U1900_out)
);
assign _U1901_in = in[1];
assign _U1901_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1901 (
    .in(_U1901_in),
    .clk(_U1901_clk),
    .out(_U1901_out)
);
assign _U1902_in = in[2];
assign _U1902_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1902 (
    .in(_U1902_in),
    .clk(_U1902_clk),
    .out(_U1902_out)
);
assign out[2] = _U1902_out;
assign out[1] = _U1901_out;
assign out[0] = _U1900_out;
endmodule

module array_delay_U1895 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1896_in;
wire _U1896_clk;
wire [15:0] _U1896_out;
wire [15:0] _U1897_in;
wire _U1897_clk;
wire [15:0] _U1897_out;
wire [15:0] _U1898_in;
wire _U1898_clk;
wire [15:0] _U1898_out;
assign _U1896_in = in[0];
assign _U1896_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1896 (
    .in(_U1896_in),
    .clk(_U1896_clk),
    .out(_U1896_out)
);
assign _U1897_in = in[1];
assign _U1897_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1897 (
    .in(_U1897_in),
    .clk(_U1897_clk),
    .out(_U1897_out)
);
assign _U1898_in = in[2];
assign _U1898_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1898 (
    .in(_U1898_in),
    .clk(_U1898_clk),
    .out(_U1898_out)
);
assign out[2] = _U1898_out;
assign out[1] = _U1897_out;
assign out[0] = _U1896_out;
endmodule

module array_delay_U1874 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1875_in;
wire _U1875_clk;
wire [15:0] _U1875_out;
wire [15:0] _U1876_in;
wire _U1876_clk;
wire [15:0] _U1876_out;
wire [15:0] _U1877_in;
wire _U1877_clk;
wire [15:0] _U1877_out;
assign _U1875_in = in[0];
assign _U1875_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1875 (
    .in(_U1875_in),
    .clk(_U1875_clk),
    .out(_U1875_out)
);
assign _U1876_in = in[1];
assign _U1876_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1876 (
    .in(_U1876_in),
    .clk(_U1876_clk),
    .out(_U1876_out)
);
assign _U1877_in = in[2];
assign _U1877_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1877 (
    .in(_U1877_in),
    .clk(_U1877_clk),
    .out(_U1877_out)
);
assign out[2] = _U1877_out;
assign out[1] = _U1876_out;
assign out[0] = _U1875_out;
endmodule

module array_delay_U1870 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1871_in;
wire _U1871_clk;
wire [15:0] _U1871_out;
wire [15:0] _U1872_in;
wire _U1872_clk;
wire [15:0] _U1872_out;
wire [15:0] _U1873_in;
wire _U1873_clk;
wire [15:0] _U1873_out;
assign _U1871_in = in[0];
assign _U1871_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1871 (
    .in(_U1871_in),
    .clk(_U1871_clk),
    .out(_U1871_out)
);
assign _U1872_in = in[1];
assign _U1872_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1872 (
    .in(_U1872_in),
    .clk(_U1872_clk),
    .out(_U1872_out)
);
assign _U1873_in = in[2];
assign _U1873_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1873 (
    .in(_U1873_in),
    .clk(_U1873_clk),
    .out(_U1873_out)
);
assign out[2] = _U1873_out;
assign out[1] = _U1872_out;
assign out[0] = _U1871_out;
endmodule

module array_delay_U1849 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1850_in;
wire _U1850_clk;
wire [15:0] _U1850_out;
wire [15:0] _U1851_in;
wire _U1851_clk;
wire [15:0] _U1851_out;
wire [15:0] _U1852_in;
wire _U1852_clk;
wire [15:0] _U1852_out;
assign _U1850_in = in[0];
assign _U1850_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1850 (
    .in(_U1850_in),
    .clk(_U1850_clk),
    .out(_U1850_out)
);
assign _U1851_in = in[1];
assign _U1851_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1851 (
    .in(_U1851_in),
    .clk(_U1851_clk),
    .out(_U1851_out)
);
assign _U1852_in = in[2];
assign _U1852_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1852 (
    .in(_U1852_in),
    .clk(_U1852_clk),
    .out(_U1852_out)
);
assign out[2] = _U1852_out;
assign out[1] = _U1851_out;
assign out[0] = _U1850_out;
endmodule

module array_delay_U1845 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1846_in;
wire _U1846_clk;
wire [15:0] _U1846_out;
wire [15:0] _U1847_in;
wire _U1847_clk;
wire [15:0] _U1847_out;
wire [15:0] _U1848_in;
wire _U1848_clk;
wire [15:0] _U1848_out;
assign _U1846_in = in[0];
assign _U1846_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1846 (
    .in(_U1846_in),
    .clk(_U1846_clk),
    .out(_U1846_out)
);
assign _U1847_in = in[1];
assign _U1847_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1847 (
    .in(_U1847_in),
    .clk(_U1847_clk),
    .out(_U1847_out)
);
assign _U1848_in = in[2];
assign _U1848_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1848 (
    .in(_U1848_in),
    .clk(_U1848_clk),
    .out(_U1848_out)
);
assign out[2] = _U1848_out;
assign out[1] = _U1847_out;
assign out[0] = _U1846_out;
endmodule

module array_delay_U1824 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1825_in;
wire _U1825_clk;
wire [15:0] _U1825_out;
wire [15:0] _U1826_in;
wire _U1826_clk;
wire [15:0] _U1826_out;
wire [15:0] _U1827_in;
wire _U1827_clk;
wire [15:0] _U1827_out;
assign _U1825_in = in[0];
assign _U1825_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1825 (
    .in(_U1825_in),
    .clk(_U1825_clk),
    .out(_U1825_out)
);
assign _U1826_in = in[1];
assign _U1826_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1826 (
    .in(_U1826_in),
    .clk(_U1826_clk),
    .out(_U1826_out)
);
assign _U1827_in = in[2];
assign _U1827_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1827 (
    .in(_U1827_in),
    .clk(_U1827_clk),
    .out(_U1827_out)
);
assign out[2] = _U1827_out;
assign out[1] = _U1826_out;
assign out[0] = _U1825_out;
endmodule

module array_delay_U1820 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1821_in;
wire _U1821_clk;
wire [15:0] _U1821_out;
wire [15:0] _U1822_in;
wire _U1822_clk;
wire [15:0] _U1822_out;
wire [15:0] _U1823_in;
wire _U1823_clk;
wire [15:0] _U1823_out;
assign _U1821_in = in[0];
assign _U1821_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1821 (
    .in(_U1821_in),
    .clk(_U1821_clk),
    .out(_U1821_out)
);
assign _U1822_in = in[1];
assign _U1822_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1822 (
    .in(_U1822_in),
    .clk(_U1822_clk),
    .out(_U1822_out)
);
assign _U1823_in = in[2];
assign _U1823_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1823 (
    .in(_U1823_in),
    .clk(_U1823_clk),
    .out(_U1823_out)
);
assign out[2] = _U1823_out;
assign out[1] = _U1822_out;
assign out[0] = _U1821_out;
endmodule

module array_delay_U1799 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1800_in;
wire _U1800_clk;
wire [15:0] _U1800_out;
wire [15:0] _U1801_in;
wire _U1801_clk;
wire [15:0] _U1801_out;
wire [15:0] _U1802_in;
wire _U1802_clk;
wire [15:0] _U1802_out;
assign _U1800_in = in[0];
assign _U1800_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1800 (
    .in(_U1800_in),
    .clk(_U1800_clk),
    .out(_U1800_out)
);
assign _U1801_in = in[1];
assign _U1801_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1801 (
    .in(_U1801_in),
    .clk(_U1801_clk),
    .out(_U1801_out)
);
assign _U1802_in = in[2];
assign _U1802_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1802 (
    .in(_U1802_in),
    .clk(_U1802_clk),
    .out(_U1802_out)
);
assign out[2] = _U1802_out;
assign out[1] = _U1801_out;
assign out[0] = _U1800_out;
endmodule

module array_delay_U1795 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1796_in;
wire _U1796_clk;
wire [15:0] _U1796_out;
wire [15:0] _U1797_in;
wire _U1797_clk;
wire [15:0] _U1797_out;
wire [15:0] _U1798_in;
wire _U1798_clk;
wire [15:0] _U1798_out;
assign _U1796_in = in[0];
assign _U1796_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1796 (
    .in(_U1796_in),
    .clk(_U1796_clk),
    .out(_U1796_out)
);
assign _U1797_in = in[1];
assign _U1797_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1797 (
    .in(_U1797_in),
    .clk(_U1797_clk),
    .out(_U1797_out)
);
assign _U1798_in = in[2];
assign _U1798_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1798 (
    .in(_U1798_in),
    .clk(_U1798_clk),
    .out(_U1798_out)
);
assign out[2] = _U1798_out;
assign out[1] = _U1797_out;
assign out[0] = _U1796_out;
endmodule

module array_delay_U1774 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1775_in;
wire _U1775_clk;
wire [15:0] _U1775_out;
wire [15:0] _U1776_in;
wire _U1776_clk;
wire [15:0] _U1776_out;
wire [15:0] _U1777_in;
wire _U1777_clk;
wire [15:0] _U1777_out;
assign _U1775_in = in[0];
assign _U1775_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1775 (
    .in(_U1775_in),
    .clk(_U1775_clk),
    .out(_U1775_out)
);
assign _U1776_in = in[1];
assign _U1776_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1776 (
    .in(_U1776_in),
    .clk(_U1776_clk),
    .out(_U1776_out)
);
assign _U1777_in = in[2];
assign _U1777_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1777 (
    .in(_U1777_in),
    .clk(_U1777_clk),
    .out(_U1777_out)
);
assign out[2] = _U1777_out;
assign out[1] = _U1776_out;
assign out[0] = _U1775_out;
endmodule

module array_delay_U1770 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1771_in;
wire _U1771_clk;
wire [15:0] _U1771_out;
wire [15:0] _U1772_in;
wire _U1772_clk;
wire [15:0] _U1772_out;
wire [15:0] _U1773_in;
wire _U1773_clk;
wire [15:0] _U1773_out;
assign _U1771_in = in[0];
assign _U1771_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1771 (
    .in(_U1771_in),
    .clk(_U1771_clk),
    .out(_U1771_out)
);
assign _U1772_in = in[1];
assign _U1772_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1772 (
    .in(_U1772_in),
    .clk(_U1772_clk),
    .out(_U1772_out)
);
assign _U1773_in = in[2];
assign _U1773_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1773 (
    .in(_U1773_in),
    .clk(_U1773_clk),
    .out(_U1773_out)
);
assign out[2] = _U1773_out;
assign out[1] = _U1772_out;
assign out[0] = _U1771_out;
endmodule

module array_delay_U1749 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1750_in;
wire _U1750_clk;
wire [15:0] _U1750_out;
wire [15:0] _U1751_in;
wire _U1751_clk;
wire [15:0] _U1751_out;
wire [15:0] _U1752_in;
wire _U1752_clk;
wire [15:0] _U1752_out;
assign _U1750_in = in[0];
assign _U1750_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1750 (
    .in(_U1750_in),
    .clk(_U1750_clk),
    .out(_U1750_out)
);
assign _U1751_in = in[1];
assign _U1751_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1751 (
    .in(_U1751_in),
    .clk(_U1751_clk),
    .out(_U1751_out)
);
assign _U1752_in = in[2];
assign _U1752_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1752 (
    .in(_U1752_in),
    .clk(_U1752_clk),
    .out(_U1752_out)
);
assign out[2] = _U1752_out;
assign out[1] = _U1751_out;
assign out[0] = _U1750_out;
endmodule

module array_delay_U1745 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1746_in;
wire _U1746_clk;
wire [15:0] _U1746_out;
wire [15:0] _U1747_in;
wire _U1747_clk;
wire [15:0] _U1747_out;
wire [15:0] _U1748_in;
wire _U1748_clk;
wire [15:0] _U1748_out;
assign _U1746_in = in[0];
assign _U1746_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1746 (
    .in(_U1746_in),
    .clk(_U1746_clk),
    .out(_U1746_out)
);
assign _U1747_in = in[1];
assign _U1747_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1747 (
    .in(_U1747_in),
    .clk(_U1747_clk),
    .out(_U1747_out)
);
assign _U1748_in = in[2];
assign _U1748_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1748 (
    .in(_U1748_in),
    .clk(_U1748_clk),
    .out(_U1748_out)
);
assign out[2] = _U1748_out;
assign out[1] = _U1747_out;
assign out[0] = _U1746_out;
endmodule

module aff__U991 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0123);
endmodule

module affine_controller__U990 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U991 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U973 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U972 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U973 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U955 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U954 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U955 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U937 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U936 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U937 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U919 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U918 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U919 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U90 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U91 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U901 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0121);
endmodule

module affine_controller__U900 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U901 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U883 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U882 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U883 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U865 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0121);
endmodule

module affine_controller__U864 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U865 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U847 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0120);
endmodule

module affine_controller__U846 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U847 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U829 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U828 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U829 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U811 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U810 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U811 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U793 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U792 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U793 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U775 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h009a);
endmodule

module affine_controller__U774 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U775 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U757 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U756 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U757 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U739 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U738 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U739 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U73 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U72 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U73 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U721 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U720 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U721 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U703 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U702 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U703 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U685 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0098);
endmodule

module affine_controller__U684 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U685 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U667 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U666 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U667 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U649 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0098);
endmodule

module affine_controller__U648 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U649 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U631 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0096);
endmodule

module affine_controller__U630 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U631 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U613 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U612 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U613 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U595 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U594 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U595 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U577 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U576 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U577 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U559 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U558 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U559 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U55 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U54 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U55 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U541 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0094);
endmodule

module affine_controller__U540 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U541 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U523 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0114);
endmodule

module affine_controller__U522 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U523 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U505 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U504 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U505 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U487 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U486 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U487 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U469 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U468 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U469 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U451 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U450 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U451 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U433 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U432 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U433 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U415 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U414 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U415 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U396 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U397 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U379 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0111);
endmodule

module affine_controller__U378 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U379 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U37 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U36 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U37 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U361 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U360 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U361 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U343 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U342 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U343 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U324 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U325 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008b);
endmodule

module affine_controller__U306 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U307 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U288 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U289 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U270 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U271 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U252 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U253 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U234 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U235 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U216 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U217 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2079 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U2078 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2079 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2054 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U2053 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2054 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2029 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U2028 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2029 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2004 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U2003 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2004 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0087);
endmodule

module affine_controller__U198 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U199 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1979 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1978 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1979 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1954 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1953 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1954 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1929 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U1928 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1929 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1904 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U1903 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1904 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U19 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U18 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U19 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1879 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U1878 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1879 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1854 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U1853 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1854 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1829 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U1828 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1829 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U181 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U180 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U181 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1804 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U1803 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1804 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1779 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U1778 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1779 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1754 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U1753 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1754 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1729 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U1728 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1729 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1711 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1710 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1711 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1693 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1692 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1693 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1675 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1674 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1675 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1657 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1656 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1657 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1639 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1638 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1639 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U162 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U163 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1621 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ba);
endmodule

module affine_controller__U1620 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1621 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1603 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1602 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1603 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1585 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1584 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1585 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1567 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1566 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1567 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1549 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1548 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1549 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1531 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1530 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1531 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1513 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b6);
endmodule

module affine_controller__U1512 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1513 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1495 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0132);
endmodule

module affine_controller__U1494 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1495 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1477 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1476 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1477 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1459 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1458 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1459 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U144 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U145 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1441 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1440 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1441 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1423 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1422 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1423 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1405 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0130);
endmodule

module affine_controller__U1404 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1405 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1387 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1386 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1387 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1369 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0130);
endmodule

module affine_controller__U1368 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1369 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1351 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1350 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1351 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1333 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0130);
endmodule

module affine_controller__U1332 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1333 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1315 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012e);
endmodule

module affine_controller__U1314 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1315 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1297 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1296 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1297 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1279 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1278 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1279 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U126 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U127 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1261 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1260 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1261 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1243 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1242 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1243 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1225 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012c);
endmodule

module affine_controller__U1224 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1225 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1207 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1206 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1207 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1189 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012c);
endmodule

module affine_controller__U1188 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1189 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1171 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012b);
endmodule

module affine_controller__U1170 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1171 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1153 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1152 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1153 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1135 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1134 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1135 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1117 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1116 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1117 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1099 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a5);
endmodule

module affine_controller__U1098 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1099 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0085);
endmodule

module affine_controller__U108 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U109 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1081 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1080 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1081 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1063 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1062 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1063 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1045 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1044 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1045 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1027 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1026 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1027 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1009 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a3);
endmodule

module affine_controller__U1008 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1009 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module harris (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0]
);
wire [15:0] _U2308_in;
wire _U2308_clk;
wire [15:0] _U2308_out;
wire cim_output_stencil_clk;
wire cim_output_stencil_flush;
wire cim_output_stencil_rst_n;
wire cim_output_stencil_op_hcompute_cim_output_stencil_write_wen;
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire cim_output_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire cim_stencil_clk;
wire cim_stencil_flush;
wire cim_stencil_rst_n;
wire cim_stencil_op_hcompute_cim_output_stencil_read_ren;
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire cim_stencil_op_hcompute_cim_stencil_write_wen;
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire grad_x_stencil_clk;
wire grad_x_stencil_flush;
wire grad_x_stencil_rst_n;
wire grad_x_stencil_op_hcompute_grad_x_stencil_write_wen;
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire grad_x_stencil_op_hcompute_lxx_stencil_read_ren;
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire grad_x_stencil_op_hcompute_lxy_stencil_read_ren;
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_clk;
wire grad_y_stencil_flush;
wire grad_y_stencil_rst_n;
wire grad_y_stencil_op_hcompute_grad_y_stencil_write_wen;
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire grad_y_stencil_op_hcompute_lxy_stencil_read_ren;
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_op_hcompute_lyy_stencil_read_ren;
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire lgxx_stencil_clk;
wire lgxx_stencil_flush;
wire lgxx_stencil_rst_n;
wire lgxx_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen;
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire lgxx_stencil_clkwrk_dsa0_clk;
wire lgxx_stencil_clkwrk_dsa0_flush;
wire lgxx_stencil_clkwrk_dsa0_rst_n;
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire lgxy_stencil_clk;
wire lgxy_stencil_flush;
wire lgxy_stencil_rst_n;
wire lgxy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen;
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire lgxy_stencil_clkwrk_dsa1_clk;
wire lgxy_stencil_clkwrk_dsa1_flush;
wire lgxy_stencil_clkwrk_dsa1_rst_n;
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire lgyy_stencil_clk;
wire lgyy_stencil_flush;
wire lgyy_stencil_rst_n;
wire lgyy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen;
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire lgyy_stencil_clkwrk_dsa2_clk;
wire lgyy_stencil_clkwrk_dsa2_flush;
wire lgyy_stencil_clkwrk_dsa2_rst_n;
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire lxx_stencil_clk;
wire lxx_stencil_flush;
wire lxx_stencil_rst_n;
wire lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire lxx_stencil_op_hcompute_lxx_stencil_write_wen;
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire lxy_stencil_clk;
wire lxy_stencil_flush;
wire lxy_stencil_rst_n;
wire lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire lxy_stencil_op_hcompute_lxy_stencil_write_wen;
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire lyy_stencil_clk;
wire lyy_stencil_flush;
wire lyy_stencil_rst_n;
wire lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire lyy_stencil_op_hcompute_lyy_stencil_write_wen;
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_clk;
wire [15:0] op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_exe_start_clk;
wire op_hcompute_cim_output_stencil_exe_start_in;
wire op_hcompute_cim_output_stencil_exe_start_out;
wire op_hcompute_cim_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_output_stencil_port_controller_clk;
wire op_hcompute_cim_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1529_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1529_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1529_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1547_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1547_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1547_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1565_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1565_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1565_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1583_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1583_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1583_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1601_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1601_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1601_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1619_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1619_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1619_d [2:0];
wire op_hcompute_cim_output_stencil_read_start;
wire op_hcompute_cim_output_stencil_write_start;
wire op_hcompute_cim_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_clk;
wire [15:0] op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire op_hcompute_cim_stencil_exe_start_clk;
wire op_hcompute_cim_stencil_exe_start_in;
wire op_hcompute_cim_stencil_exe_start_out;
wire op_hcompute_cim_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_port_controller_clk;
wire op_hcompute_cim_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1349_clk;
wire op_hcompute_cim_stencil_port_controller_U1349_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1349_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1367_clk;
wire op_hcompute_cim_stencil_port_controller_U1367_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1367_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1385_clk;
wire op_hcompute_cim_stencil_port_controller_U1385_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1385_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1403_clk;
wire op_hcompute_cim_stencil_port_controller_U1403_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1403_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1421_clk;
wire op_hcompute_cim_stencil_port_controller_U1421_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1421_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1439_clk;
wire op_hcompute_cim_stencil_port_controller_U1439_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1439_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1457_clk;
wire op_hcompute_cim_stencil_port_controller_U1457_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1457_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1475_clk;
wire op_hcompute_cim_stencil_port_controller_U1475_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1475_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1493_clk;
wire op_hcompute_cim_stencil_port_controller_U1493_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1493_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1511_clk;
wire op_hcompute_cim_stencil_port_controller_U1511_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1511_d [2:0];
wire op_hcompute_cim_stencil_read_start;
wire op_hcompute_cim_stencil_write_start;
wire op_hcompute_cim_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_clk;
wire [15:0] op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire op_hcompute_grad_x_stencil_exe_start_clk;
wire op_hcompute_grad_x_stencil_exe_start_in;
wire op_hcompute_grad_x_stencil_exe_start_out;
wire op_hcompute_grad_x_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_port_controller_clk;
wire op_hcompute_grad_x_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U125_clk;
wire op_hcompute_grad_x_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U125_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U143_clk;
wire op_hcompute_grad_x_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U143_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U161_clk;
wire op_hcompute_grad_x_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U161_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U179_clk;
wire op_hcompute_grad_x_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U179_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U197_clk;
wire op_hcompute_grad_x_stencil_port_controller_U197_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U197_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U215_clk;
wire op_hcompute_grad_x_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U215_d [2:0];
wire op_hcompute_grad_x_stencil_read_start;
wire op_hcompute_grad_x_stencil_write_start;
wire op_hcompute_grad_x_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_clk;
wire [15:0] op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire [15:0] op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire op_hcompute_grad_y_stencil_exe_start_clk;
wire op_hcompute_grad_y_stencil_exe_start_in;
wire op_hcompute_grad_y_stencil_exe_start_out;
wire op_hcompute_grad_y_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_port_controller_clk;
wire op_hcompute_grad_y_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U557_clk;
wire op_hcompute_grad_y_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U557_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U575_clk;
wire op_hcompute_grad_y_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U575_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U593_clk;
wire op_hcompute_grad_y_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U593_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U611_clk;
wire op_hcompute_grad_y_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U611_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U629_clk;
wire op_hcompute_grad_y_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U629_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U647_clk;
wire op_hcompute_grad_y_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U647_d [2:0];
wire op_hcompute_grad_y_stencil_read_start;
wire op_hcompute_grad_y_stencil_write_start;
wire op_hcompute_grad_y_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1637_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1637_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1637_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1655_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1655_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1655_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1673_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1673_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1673_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1691_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1691_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1691_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1709_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1709_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1709_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1727_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1727_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1727_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_clk;
wire [15:0] op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire op_hcompute_lgxx_stencil_1_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire op_hcompute_lgxx_stencil_1_exe_start_clk;
wire op_hcompute_lgxx_stencil_1_exe_start_in;
wire op_hcompute_lgxx_stencil_1_exe_start_out;
wire op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U413_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U431_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U449_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U449_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U449_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U467_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U467_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U467_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U485_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U485_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U485_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U503_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U503_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U503_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U521_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U521_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U521_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U539_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U539_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U539_d [2:0];
wire op_hcompute_lgxx_stencil_1_read_start;
wire op_hcompute_lgxx_stencil_1_write_start;
wire op_hcompute_lgxx_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_exe_start_clk;
wire op_hcompute_lgxx_stencil_exe_start_in;
wire op_hcompute_lgxx_stencil_exe_start_out;
wire op_hcompute_lgxx_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_port_controller_clk;
wire op_hcompute_lgxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U341_clk;
wire op_hcompute_lgxx_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U341_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U359_clk;
wire op_hcompute_lgxx_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U359_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U377_clk;
wire op_hcompute_lgxx_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U377_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U395_clk;
wire op_hcompute_lgxx_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U395_d [2:0];
wire op_hcompute_lgxx_stencil_read_start;
wire op_hcompute_lgxx_stencil_write_start;
wire op_hcompute_lgxx_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_clk;
wire [15:0] op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire op_hcompute_lgxy_stencil_1_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire op_hcompute_lgxy_stencil_1_exe_start_clk;
wire op_hcompute_lgxy_stencil_1_exe_start_in;
wire op_hcompute_lgxy_stencil_1_exe_start_out;
wire op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U1007_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U1007_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U1007_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U881_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U881_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U881_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U899_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U899_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U899_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U917_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U917_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U917_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U935_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U935_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U935_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U953_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U953_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U953_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U971_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U971_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U971_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U989_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U989_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U989_d [2:0];
wire op_hcompute_lgxy_stencil_1_read_start;
wire op_hcompute_lgxy_stencil_1_write_start;
wire op_hcompute_lgxy_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_exe_start_clk;
wire op_hcompute_lgxy_stencil_exe_start_in;
wire op_hcompute_lgxy_stencil_exe_start_out;
wire op_hcompute_lgxy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_port_controller_clk;
wire op_hcompute_lgxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U809_clk;
wire op_hcompute_lgxy_stencil_port_controller_U809_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U809_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U827_clk;
wire op_hcompute_lgxy_stencil_port_controller_U827_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U827_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U845_clk;
wire op_hcompute_lgxy_stencil_port_controller_U845_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U845_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U863_clk;
wire op_hcompute_lgxy_stencil_port_controller_U863_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U863_d [2:0];
wire op_hcompute_lgxy_stencil_read_start;
wire op_hcompute_lgxy_stencil_write_start;
wire op_hcompute_lgxy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_clk;
wire [15:0] op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire op_hcompute_lgyy_stencil_1_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire op_hcompute_lgyy_stencil_1_exe_start_clk;
wire op_hcompute_lgyy_stencil_1_exe_start_in;
wire op_hcompute_lgyy_stencil_1_exe_start_out;
wire op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1205_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1205_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1205_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1223_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1223_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1223_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1241_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1241_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1241_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1259_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1259_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1259_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1277_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1277_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1277_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1295_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1295_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1295_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1313_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1313_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1313_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1331_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1331_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1331_d [2:0];
wire op_hcompute_lgyy_stencil_1_read_start;
wire op_hcompute_lgyy_stencil_1_write_start;
wire op_hcompute_lgyy_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_exe_start_clk;
wire op_hcompute_lgyy_stencil_exe_start_in;
wire op_hcompute_lgyy_stencil_exe_start_out;
wire op_hcompute_lgyy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_port_controller_clk;
wire op_hcompute_lgyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1133_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1133_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1133_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1151_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1151_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1151_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1169_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1169_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1169_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1187_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1187_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1187_d [2:0];
wire op_hcompute_lgyy_stencil_read_start;
wire op_hcompute_lgyy_stencil_write_start;
wire op_hcompute_lgyy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_clk;
wire [15:0] op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire op_hcompute_lxx_stencil_exe_start_clk;
wire op_hcompute_lxx_stencil_exe_start_in;
wire op_hcompute_lxx_stencil_exe_start_out;
wire op_hcompute_lxx_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_port_controller_clk;
wire op_hcompute_lxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U233_clk;
wire op_hcompute_lxx_stencil_port_controller_U233_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U233_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U251_clk;
wire op_hcompute_lxx_stencil_port_controller_U251_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U251_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U269_clk;
wire op_hcompute_lxx_stencil_port_controller_U269_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U269_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U287_clk;
wire op_hcompute_lxx_stencil_port_controller_U287_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U287_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U305_clk;
wire op_hcompute_lxx_stencil_port_controller_U305_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U305_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U323_clk;
wire op_hcompute_lxx_stencil_port_controller_U323_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U323_d [2:0];
wire op_hcompute_lxx_stencil_read_start;
wire op_hcompute_lxx_stencil_write_start;
wire op_hcompute_lxx_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_clk;
wire [15:0] op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire op_hcompute_lxy_stencil_exe_start_clk;
wire op_hcompute_lxy_stencil_exe_start_in;
wire op_hcompute_lxy_stencil_exe_start_out;
wire op_hcompute_lxy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_port_controller_clk;
wire op_hcompute_lxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U665_clk;
wire op_hcompute_lxy_stencil_port_controller_U665_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U665_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U683_clk;
wire op_hcompute_lxy_stencil_port_controller_U683_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U683_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U701_clk;
wire op_hcompute_lxy_stencil_port_controller_U701_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U701_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U719_clk;
wire op_hcompute_lxy_stencil_port_controller_U719_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U719_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U737_clk;
wire op_hcompute_lxy_stencil_port_controller_U737_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U737_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U755_clk;
wire op_hcompute_lxy_stencil_port_controller_U755_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U755_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U773_clk;
wire op_hcompute_lxy_stencil_port_controller_U773_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U773_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U791_clk;
wire op_hcompute_lxy_stencil_port_controller_U791_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U791_d [2:0];
wire op_hcompute_lxy_stencil_read_start;
wire op_hcompute_lxy_stencil_write_start;
wire op_hcompute_lxy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_clk;
wire [15:0] op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire [15:0] op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_lyy_stencil_exe_start_clk;
wire op_hcompute_lyy_stencil_exe_start_in;
wire op_hcompute_lyy_stencil_exe_start_out;
wire op_hcompute_lyy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_port_controller_clk;
wire op_hcompute_lyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1025_clk;
wire op_hcompute_lyy_stencil_port_controller_U1025_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1025_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1043_clk;
wire op_hcompute_lyy_stencil_port_controller_U1043_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1043_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1061_clk;
wire op_hcompute_lyy_stencil_port_controller_U1061_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1061_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1079_clk;
wire op_hcompute_lyy_stencil_port_controller_U1079_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1079_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1097_clk;
wire op_hcompute_lyy_stencil_port_controller_U1097_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1097_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1115_clk;
wire op_hcompute_lyy_stencil_port_controller_U1115_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1115_d [2:0];
wire op_hcompute_lyy_stencil_read_start;
wire op_hcompute_lyy_stencil_write_start;
wire op_hcompute_lyy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_in;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_read_start;
wire op_hcompute_padded16_global_wrapper_stencil_write_start;
wire op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire padded16_global_wrapper_stencil_clk;
wire padded16_global_wrapper_stencil_flush;
wire padded16_global_wrapper_stencil_rst_n;
wire padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign _U2308_in = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
assign _U2308_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2308 (
    .in(_U2308_in),
    .clk(_U2308_clk),
    .out(_U2308_out)
);
assign cim_output_stencil_clk = clk;
assign cim_output_stencil_flush = flush;
assign cim_output_stencil_rst_n = rst_n;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_wen = op_hcompute_cim_output_stencil_write_start;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[2] = op_hcompute_cim_output_stencil_write_start_control_vars_out[2];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[1] = op_hcompute_cim_output_stencil_write_start_control_vars_out[1];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[0] = op_hcompute_cim_output_stencil_write_start_control_vars_out[0];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write[0];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
cim_output_stencil_ub cim_output_stencil (
    .clk(cim_output_stencil_clk),
    .flush(cim_output_stencil_flush),
    .rst_n(cim_output_stencil_rst_n),
    .op_hcompute_cim_output_stencil_write_wen(cim_output_stencil_op_hcompute_cim_output_stencil_write_wen),
    .op_hcompute_cim_output_stencil_write_ctrl_vars(cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read_ren(cim_output_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
assign cim_stencil_clk = clk;
assign cim_stencil_flush = flush;
assign cim_stencil_rst_n = rst_n;
assign cim_stencil_op_hcompute_cim_output_stencil_read_ren = op_hcompute_cim_output_stencil_read_start;
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
assign cim_stencil_op_hcompute_cim_stencil_write_wen = op_hcompute_cim_stencil_write_start;
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[2] = op_hcompute_cim_stencil_write_start_control_vars_out[2];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[1] = op_hcompute_cim_stencil_write_start_control_vars_out[1];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[0] = op_hcompute_cim_stencil_write_start_control_vars_out[0];
assign cim_stencil_op_hcompute_cim_stencil_write[0] = op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write[0];
cim_stencil_ub cim_stencil (
    .clk(cim_stencil_clk),
    .flush(cim_stencil_flush),
    .rst_n(cim_stencil_rst_n),
    .op_hcompute_cim_output_stencil_read_ren(cim_stencil_op_hcompute_cim_output_stencil_read_ren),
    .op_hcompute_cim_output_stencil_read_ctrl_vars(cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write_wen(cim_stencil_op_hcompute_cim_stencil_write_wen),
    .op_hcompute_cim_stencil_write_ctrl_vars(cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
assign grad_x_stencil_clk = clk;
assign grad_x_stencil_flush = flush;
assign grad_x_stencil_rst_n = rst_n;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_wen = op_hcompute_grad_x_stencil_write_start;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[2] = op_hcompute_grad_x_stencil_write_start_control_vars_out[2];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[1] = op_hcompute_grad_x_stencil_write_start_control_vars_out[1];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[0] = op_hcompute_grad_x_stencil_write_start_control_vars_out[0];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write[0];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ren = op_hcompute_lxx_stencil_read_start;
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[0] = op_hcompute_lxx_stencil_port_controller_d[0];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ren = op_hcompute_lxy_stencil_read_start;
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
grad_x_stencil_ub grad_x_stencil (
    .clk(grad_x_stencil_clk),
    .flush(grad_x_stencil_flush),
    .rst_n(grad_x_stencil_rst_n),
    .op_hcompute_grad_x_stencil_write_wen(grad_x_stencil_op_hcompute_grad_x_stencil_write_wen),
    .op_hcompute_grad_x_stencil_write_ctrl_vars(grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars),
    .op_hcompute_grad_x_stencil_write(grad_x_stencil_op_hcompute_grad_x_stencil_write),
    .op_hcompute_lxx_stencil_read_ren(grad_x_stencil_op_hcompute_lxx_stencil_read_ren),
    .op_hcompute_lxx_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars),
    .op_hcompute_lxx_stencil_read(grad_x_stencil_op_hcompute_lxx_stencil_read),
    .op_hcompute_lxy_stencil_read_ren(grad_x_stencil_op_hcompute_lxy_stencil_read_ren),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_x_stencil_op_hcompute_lxy_stencil_read)
);
assign grad_y_stencil_clk = clk;
assign grad_y_stencil_flush = flush;
assign grad_y_stencil_rst_n = rst_n;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_wen = op_hcompute_grad_y_stencil_write_start;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[2] = op_hcompute_grad_y_stencil_write_start_control_vars_out[2];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[1] = op_hcompute_grad_y_stencil_write_start_control_vars_out[1];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[0] = op_hcompute_grad_y_stencil_write_start_control_vars_out[0];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write[0];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ren = op_hcompute_lxy_stencil_read_start;
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ren = op_hcompute_lyy_stencil_read_start;
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[0] = op_hcompute_lyy_stencil_port_controller_d[0];
grad_y_stencil_ub grad_y_stencil (
    .clk(grad_y_stencil_clk),
    .flush(grad_y_stencil_flush),
    .rst_n(grad_y_stencil_rst_n),
    .op_hcompute_grad_y_stencil_write_wen(grad_y_stencil_op_hcompute_grad_y_stencil_write_wen),
    .op_hcompute_grad_y_stencil_write_ctrl_vars(grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars),
    .op_hcompute_grad_y_stencil_write(grad_y_stencil_op_hcompute_grad_y_stencil_write),
    .op_hcompute_lxy_stencil_read_ren(grad_y_stencil_op_hcompute_lxy_stencil_read_ren),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_y_stencil_op_hcompute_lxy_stencil_read),
    .op_hcompute_lyy_stencil_read_ren(grad_y_stencil_op_hcompute_lyy_stencil_read_ren),
    .op_hcompute_lyy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars),
    .op_hcompute_lyy_stencil_read(grad_y_stencil_op_hcompute_lyy_stencil_read)
);
assign lgxx_stencil_clk = clk;
assign lgxx_stencil_flush = flush;
assign lgxx_stencil_rst_n = rst_n;
assign lgxx_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen = op_hcompute_lgxx_stencil_1_write_start;
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[2];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[1];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0];
lgxx_stencil_ub lgxx_stencil (
    .clk(lgxx_stencil_clk),
    .flush(lgxx_stencil_flush),
    .rst_n(lgxx_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgxx_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write_wen(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen),
    .op_hcompute_lgxx_stencil_1_write_ctrl_vars(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign lgxx_stencil_clkwrk_dsa0_clk = clk;
assign lgxx_stencil_clkwrk_dsa0_flush = flush;
assign lgxx_stencil_clkwrk_dsa0_rst_n = rst_n;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren = op_hcompute_lgxx_stencil_1_read_start;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen = op_hcompute_lgxx_stencil_write_start;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_write_start_control_vars_out[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_write_start_control_vars_out[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_write_start_control_vars_out[0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0];
lgxx_stencil_clkwrk_dsa0_ub lgxx_stencil_clkwrk_dsa0 (
    .clk(lgxx_stencil_clkwrk_dsa0_clk),
    .flush(lgxx_stencil_clkwrk_dsa0_flush),
    .rst_n(lgxx_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lgxx_stencil_write_wen(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen),
    .op_hcompute_lgxx_stencil_write_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign lgxy_stencil_clk = clk;
assign lgxy_stencil_flush = flush;
assign lgxy_stencil_rst_n = rst_n;
assign lgxy_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen = op_hcompute_lgxy_stencil_1_write_start;
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[2];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[1];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0];
lgxy_stencil_ub lgxy_stencil (
    .clk(lgxy_stencil_clk),
    .flush(lgxy_stencil_flush),
    .rst_n(lgxy_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgxy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write_wen(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen),
    .op_hcompute_lgxy_stencil_1_write_ctrl_vars(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign lgxy_stencil_clkwrk_dsa1_clk = clk;
assign lgxy_stencil_clkwrk_dsa1_flush = flush;
assign lgxy_stencil_clkwrk_dsa1_rst_n = rst_n;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren = op_hcompute_lgxy_stencil_1_read_start;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen = op_hcompute_lgxy_stencil_write_start;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_write_start_control_vars_out[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_write_start_control_vars_out[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_write_start_control_vars_out[0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0];
lgxy_stencil_clkwrk_dsa1_ub lgxy_stencil_clkwrk_dsa1 (
    .clk(lgxy_stencil_clkwrk_dsa1_clk),
    .flush(lgxy_stencil_clkwrk_dsa1_flush),
    .rst_n(lgxy_stencil_clkwrk_dsa1_rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lgxy_stencil_write_wen(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen),
    .op_hcompute_lgxy_stencil_write_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign lgyy_stencil_clk = clk;
assign lgyy_stencil_flush = flush;
assign lgyy_stencil_rst_n = rst_n;
assign lgyy_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen = op_hcompute_lgyy_stencil_1_write_start;
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[2];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[1];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0];
lgyy_stencil_ub lgyy_stencil (
    .clk(lgyy_stencil_clk),
    .flush(lgyy_stencil_flush),
    .rst_n(lgyy_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgyy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write_wen(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen),
    .op_hcompute_lgyy_stencil_1_write_ctrl_vars(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign lgyy_stencil_clkwrk_dsa2_clk = clk;
assign lgyy_stencil_clkwrk_dsa2_flush = flush;
assign lgyy_stencil_clkwrk_dsa2_rst_n = rst_n;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren = op_hcompute_lgyy_stencil_1_read_start;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen = op_hcompute_lgyy_stencil_write_start;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_write_start_control_vars_out[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_write_start_control_vars_out[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_write_start_control_vars_out[0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0];
lgyy_stencil_clkwrk_dsa2_ub lgyy_stencil_clkwrk_dsa2 (
    .clk(lgyy_stencil_clkwrk_dsa2_clk),
    .flush(lgyy_stencil_clkwrk_dsa2_flush),
    .rst_n(lgyy_stencil_clkwrk_dsa2_rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lgyy_stencil_write_wen(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen),
    .op_hcompute_lgyy_stencil_write_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign lxx_stencil_clk = clk;
assign lxx_stencil_flush = flush;
assign lxx_stencil_rst_n = rst_n;
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren = op_hcompute_lgxx_stencil_1_read_start;
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
assign lxx_stencil_op_hcompute_lxx_stencil_write_wen = op_hcompute_lxx_stencil_write_start;
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[2] = op_hcompute_lxx_stencil_write_start_control_vars_out[2];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[1] = op_hcompute_lxx_stencil_write_start_control_vars_out[1];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[0] = op_hcompute_lxx_stencil_write_start_control_vars_out[0];
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write[0];
lxx_stencil_ub lxx_stencil (
    .clk(lxx_stencil_clk),
    .flush(lxx_stencil_flush),
    .rst_n(lxx_stencil_rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write_wen(lxx_stencil_op_hcompute_lxx_stencil_write_wen),
    .op_hcompute_lxx_stencil_write_ctrl_vars(lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign lxy_stencil_clk = clk;
assign lxy_stencil_flush = flush;
assign lxy_stencil_rst_n = rst_n;
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren = op_hcompute_lgxy_stencil_1_read_start;
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
assign lxy_stencil_op_hcompute_lxy_stencil_write_wen = op_hcompute_lxy_stencil_write_start;
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[2] = op_hcompute_lxy_stencil_write_start_control_vars_out[2];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[1] = op_hcompute_lxy_stencil_write_start_control_vars_out[1];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[0] = op_hcompute_lxy_stencil_write_start_control_vars_out[0];
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write[0];
lxy_stencil_ub lxy_stencil (
    .clk(lxy_stencil_clk),
    .flush(lxy_stencil_flush),
    .rst_n(lxy_stencil_rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write_wen(lxy_stencil_op_hcompute_lxy_stencil_write_wen),
    .op_hcompute_lxy_stencil_write_ctrl_vars(lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign lyy_stencil_clk = clk;
assign lyy_stencil_flush = flush;
assign lyy_stencil_rst_n = rst_n;
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren = op_hcompute_lgyy_stencil_1_read_start;
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
assign lyy_stencil_op_hcompute_lyy_stencil_write_wen = op_hcompute_lyy_stencil_write_start;
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[2] = op_hcompute_lyy_stencil_write_start_control_vars_out[2];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[1] = op_hcompute_lyy_stencil_write_start_control_vars_out[1];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[0] = op_hcompute_lyy_stencil_write_start_control_vars_out[0];
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write[0];
lyy_stencil_ub lyy_stencil (
    .clk(lyy_stencil_clk),
    .flush(lyy_stencil_flush),
    .rst_n(lyy_stencil_rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lyy_stencil_write_wen(lyy_stencil_op_hcompute_lyy_stencil_write_wen),
    .op_hcompute_lyy_stencil_write_ctrl_vars(lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars),
    .op_hcompute_lyy_stencil_write(lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_cim_output_stencil_clk = clk;
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[8] = cim_stencil_op_hcompute_cim_output_stencil_read[8];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[7] = cim_stencil_op_hcompute_cim_output_stencil_read[7];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[6] = cim_stencil_op_hcompute_cim_output_stencil_read[6];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[5] = cim_stencil_op_hcompute_cim_output_stencil_read[5];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[4] = cim_stencil_op_hcompute_cim_output_stencil_read[4];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[3] = cim_stencil_op_hcompute_cim_output_stencil_read[3];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[2] = cim_stencil_op_hcompute_cim_output_stencil_read[2];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[1] = cim_stencil_op_hcompute_cim_output_stencil_read[1];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[0] = cim_stencil_op_hcompute_cim_output_stencil_read[0];
cu_op_hcompute_cim_output_stencil op_hcompute_cim_output_stencil (
    .clk(op_hcompute_cim_output_stencil_clk),
    .cim_stencil_op_hcompute_cim_output_stencil_read(op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read),
    .cim_output_stencil_op_hcompute_cim_output_stencil_write(op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write)
);
assign op_hcompute_cim_output_stencil_exe_start_clk = clk;
assign op_hcompute_cim_output_stencil_exe_start_in = op_hcompute_cim_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_output_stencil_exe_start (
    .clk(op_hcompute_cim_output_stencil_exe_start_clk),
    .in(op_hcompute_cim_output_stencil_exe_start_in),
    .out(op_hcompute_cim_output_stencil_exe_start_out)
);
assign op_hcompute_cim_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2074 op_hcompute_cim_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_cim_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_cim_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_cim_output_stencil_port_controller_clk = clk;
affine_controller__U2053 op_hcompute_cim_output_stencil_port_controller (
    .clk(op_hcompute_cim_output_stencil_port_controller_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1529_clk = clk;
affine_controller__U1512 op_hcompute_cim_output_stencil_port_controller_U1529 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1529_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1529_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1529_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1547_clk = clk;
affine_controller__U1530 op_hcompute_cim_output_stencil_port_controller_U1547 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1547_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1547_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1547_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1565_clk = clk;
affine_controller__U1548 op_hcompute_cim_output_stencil_port_controller_U1565 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1565_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1565_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1565_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1583_clk = clk;
affine_controller__U1566 op_hcompute_cim_output_stencil_port_controller_U1583 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1583_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1583_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1583_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1601_clk = clk;
affine_controller__U1584 op_hcompute_cim_output_stencil_port_controller_U1601 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1601_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1601_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1601_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1619_clk = clk;
affine_controller__U1602 op_hcompute_cim_output_stencil_port_controller_U1619 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1619_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1619_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1619_d)
);
assign op_hcompute_cim_output_stencil_read_start = op_hcompute_cim_output_stencil_port_controller_valid;
assign op_hcompute_cim_output_stencil_write_start = op_hcompute_cim_output_stencil_exe_start_out;
assign op_hcompute_cim_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2070 op_hcompute_cim_output_stencil_write_start_control_vars (
    .clk(op_hcompute_cim_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_cim_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_cim_stencil_clk = clk;
assign op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
assign op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
assign op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
cu_op_hcompute_cim_stencil op_hcompute_cim_stencil (
    .clk(op_hcompute_cim_stencil_clk),
    .lgxx_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read),
    .lgxy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read),
    .lgyy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read),
    .cim_stencil_op_hcompute_cim_stencil_write(op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write)
);
assign op_hcompute_cim_stencil_exe_start_clk = clk;
assign op_hcompute_cim_stencil_exe_start_in = op_hcompute_cim_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_stencil_exe_start (
    .clk(op_hcompute_cim_stencil_exe_start_clk),
    .in(op_hcompute_cim_stencil_exe_start_in),
    .out(op_hcompute_cim_stencil_exe_start_out)
);
assign op_hcompute_cim_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_cim_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2049 op_hcompute_cim_stencil_exe_start_control_vars (
    .clk(op_hcompute_cim_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_cim_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_stencil_exe_start_control_vars_out)
);
assign op_hcompute_cim_stencil_port_controller_clk = clk;
affine_controller__U2028 op_hcompute_cim_stencil_port_controller (
    .clk(op_hcompute_cim_stencil_port_controller_clk),
    .valid(op_hcompute_cim_stencil_port_controller_valid),
    .d(op_hcompute_cim_stencil_port_controller_d)
);
assign op_hcompute_cim_stencil_port_controller_U1349_clk = clk;
affine_controller__U1332 op_hcompute_cim_stencil_port_controller_U1349 (
    .clk(op_hcompute_cim_stencil_port_controller_U1349_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1349_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1349_d)
);
assign op_hcompute_cim_stencil_port_controller_U1367_clk = clk;
affine_controller__U1350 op_hcompute_cim_stencil_port_controller_U1367 (
    .clk(op_hcompute_cim_stencil_port_controller_U1367_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1367_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1367_d)
);
assign op_hcompute_cim_stencil_port_controller_U1385_clk = clk;
affine_controller__U1368 op_hcompute_cim_stencil_port_controller_U1385 (
    .clk(op_hcompute_cim_stencil_port_controller_U1385_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1385_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1385_d)
);
assign op_hcompute_cim_stencil_port_controller_U1403_clk = clk;
affine_controller__U1386 op_hcompute_cim_stencil_port_controller_U1403 (
    .clk(op_hcompute_cim_stencil_port_controller_U1403_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1403_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1403_d)
);
assign op_hcompute_cim_stencil_port_controller_U1421_clk = clk;
affine_controller__U1404 op_hcompute_cim_stencil_port_controller_U1421 (
    .clk(op_hcompute_cim_stencil_port_controller_U1421_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1421_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1421_d)
);
assign op_hcompute_cim_stencil_port_controller_U1439_clk = clk;
affine_controller__U1422 op_hcompute_cim_stencil_port_controller_U1439 (
    .clk(op_hcompute_cim_stencil_port_controller_U1439_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1439_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1439_d)
);
assign op_hcompute_cim_stencil_port_controller_U1457_clk = clk;
affine_controller__U1440 op_hcompute_cim_stencil_port_controller_U1457 (
    .clk(op_hcompute_cim_stencil_port_controller_U1457_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1457_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1457_d)
);
assign op_hcompute_cim_stencil_port_controller_U1475_clk = clk;
affine_controller__U1458 op_hcompute_cim_stencil_port_controller_U1475 (
    .clk(op_hcompute_cim_stencil_port_controller_U1475_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1475_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1475_d)
);
assign op_hcompute_cim_stencil_port_controller_U1493_clk = clk;
affine_controller__U1476 op_hcompute_cim_stencil_port_controller_U1493 (
    .clk(op_hcompute_cim_stencil_port_controller_U1493_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1493_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1493_d)
);
assign op_hcompute_cim_stencil_port_controller_U1511_clk = clk;
affine_controller__U1494 op_hcompute_cim_stencil_port_controller_U1511 (
    .clk(op_hcompute_cim_stencil_port_controller_U1511_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1511_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1511_d)
);
assign op_hcompute_cim_stencil_read_start = op_hcompute_cim_stencil_port_controller_valid;
assign op_hcompute_cim_stencil_write_start = op_hcompute_cim_stencil_exe_start_out;
assign op_hcompute_cim_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_cim_stencil_write_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_write_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_write_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2045 op_hcompute_cim_stencil_write_start_control_vars (
    .clk(op_hcompute_cim_stencil_write_start_control_vars_clk),
    .in(op_hcompute_cim_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_stencil_write_start_control_vars_out)
);
assign op_hcompute_grad_x_stencil_clk = clk;
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
cu_op_hcompute_grad_x_stencil op_hcompute_grad_x_stencil (
    .clk(op_hcompute_grad_x_stencil_clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read(op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .grad_x_stencil_op_hcompute_grad_x_stencil_write(op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write)
);
assign op_hcompute_grad_x_stencil_exe_start_clk = clk;
assign op_hcompute_grad_x_stencil_exe_start_in = op_hcompute_grad_x_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_x_stencil_exe_start (
    .clk(op_hcompute_grad_x_stencil_exe_start_clk),
    .in(op_hcompute_grad_x_stencil_exe_start_in),
    .out(op_hcompute_grad_x_stencil_exe_start_out)
);
assign op_hcompute_grad_x_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1774 op_hcompute_grad_x_stencil_exe_start_control_vars (
    .clk(op_hcompute_grad_x_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_grad_x_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_exe_start_control_vars_out)
);
assign op_hcompute_grad_x_stencil_port_controller_clk = clk;
affine_controller__U1753 op_hcompute_grad_x_stencil_port_controller (
    .clk(op_hcompute_grad_x_stencil_port_controller_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_grad_x_stencil_port_controller_U125 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U125_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U125_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U125_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_grad_x_stencil_port_controller_U143 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U143_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U143_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U143_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_grad_x_stencil_port_controller_U161 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U161_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U161_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U161_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_grad_x_stencil_port_controller_U179 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U179_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U179_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U179_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_grad_x_stencil_port_controller_U197 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U197_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U197_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U197_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_grad_x_stencil_port_controller_U215 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U215_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U215_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U215_d)
);
assign op_hcompute_grad_x_stencil_read_start = op_hcompute_grad_x_stencil_port_controller_valid;
assign op_hcompute_grad_x_stencil_write_start = op_hcompute_grad_x_stencil_exe_start_out;
assign op_hcompute_grad_x_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1770 op_hcompute_grad_x_stencil_write_start_control_vars (
    .clk(op_hcompute_grad_x_stencil_write_start_control_vars_clk),
    .in(op_hcompute_grad_x_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_write_start_control_vars_out)
);
assign op_hcompute_grad_y_stencil_clk = clk;
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
cu_op_hcompute_grad_y_stencil op_hcompute_grad_y_stencil (
    .clk(op_hcompute_grad_y_stencil_clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read(op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .grad_y_stencil_op_hcompute_grad_y_stencil_write(op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write)
);
assign op_hcompute_grad_y_stencil_exe_start_clk = clk;
assign op_hcompute_grad_y_stencil_exe_start_in = op_hcompute_grad_y_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_y_stencil_exe_start (
    .clk(op_hcompute_grad_y_stencil_exe_start_clk),
    .in(op_hcompute_grad_y_stencil_exe_start_in),
    .out(op_hcompute_grad_y_stencil_exe_start_out)
);
assign op_hcompute_grad_y_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1874 op_hcompute_grad_y_stencil_exe_start_control_vars (
    .clk(op_hcompute_grad_y_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_grad_y_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_exe_start_control_vars_out)
);
assign op_hcompute_grad_y_stencil_port_controller_clk = clk;
affine_controller__U1853 op_hcompute_grad_y_stencil_port_controller (
    .clk(op_hcompute_grad_y_stencil_port_controller_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U557_clk = clk;
affine_controller__U540 op_hcompute_grad_y_stencil_port_controller_U557 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U557_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U557_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U557_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U575_clk = clk;
affine_controller__U558 op_hcompute_grad_y_stencil_port_controller_U575 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U575_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U575_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U575_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U593_clk = clk;
affine_controller__U576 op_hcompute_grad_y_stencil_port_controller_U593 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U593_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U593_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U593_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U611_clk = clk;
affine_controller__U594 op_hcompute_grad_y_stencil_port_controller_U611 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U611_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U611_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U611_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U629_clk = clk;
affine_controller__U612 op_hcompute_grad_y_stencil_port_controller_U629 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U629_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U629_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U629_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U647_clk = clk;
affine_controller__U630 op_hcompute_grad_y_stencil_port_controller_U647 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U647_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U647_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U647_d)
);
assign op_hcompute_grad_y_stencil_read_start = op_hcompute_grad_y_stencil_port_controller_valid;
assign op_hcompute_grad_y_stencil_write_start = op_hcompute_grad_y_stencil_exe_start_out;
assign op_hcompute_grad_y_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1870 op_hcompute_grad_y_stencil_write_start_control_vars (
    .clk(op_hcompute_grad_y_stencil_write_start_control_vars_clk),
    .in(op_hcompute_grad_y_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .cim_output_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(op_hcompute_hw_output_stencil_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_in),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
assign op_hcompute_hw_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2099 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U2078 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1637_clk = clk;
affine_controller__U1620 op_hcompute_hw_output_stencil_port_controller_U1637 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1637_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1637_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1637_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1655_clk = clk;
affine_controller__U1638 op_hcompute_hw_output_stencil_port_controller_U1655 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1655_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1655_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1655_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1673_clk = clk;
affine_controller__U1656 op_hcompute_hw_output_stencil_port_controller_U1673 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1673_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1673_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1673_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1691_clk = clk;
affine_controller__U1674 op_hcompute_hw_output_stencil_port_controller_U1691 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1691_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1691_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1691_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1709_clk = clk;
affine_controller__U1692 op_hcompute_hw_output_stencil_port_controller_U1709 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1709_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1709_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1709_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1727_clk = clk;
affine_controller__U1710 op_hcompute_hw_output_stencil_port_controller_U1727 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1727_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1727_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1727_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2095 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_clk = clk;
cu_op_hcompute_lgxx_stencil op_hcompute_lgxx_stencil (
    .clk(op_hcompute_lgxx_stencil_clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write(op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign op_hcompute_lgxx_stencil_1_clk = clk;
assign op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[8] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[8];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[7] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[7];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[6] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[6];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[5] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[5];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[4] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[4];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[3] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[3];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[2] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[2];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[1] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[1];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[0] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[0];
cu_op_hcompute_lgxx_stencil_1 op_hcompute_lgxx_stencil_1 (
    .clk(op_hcompute_lgxx_stencil_1_clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .lxx_stencil_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .lgxx_stencil_op_hcompute_lgxx_stencil_1_write(op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign op_hcompute_lgxx_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgxx_stencil_1_exe_start_in = op_hcompute_lgxx_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_1_exe_start (
    .clk(op_hcompute_lgxx_stencil_1_exe_start_clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_out)
);
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1849 op_hcompute_lgxx_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_1_port_controller_clk = clk;
affine_controller__U1828 op_hcompute_lgxx_stencil_1_port_controller (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U413_clk = clk;
affine_controller__U396 op_hcompute_lgxx_stencil_1_port_controller_U413 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U413_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U413_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U431_clk = clk;
affine_controller__U414 op_hcompute_lgxx_stencil_1_port_controller_U431 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U431_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U449_clk = clk;
affine_controller__U432 op_hcompute_lgxx_stencil_1_port_controller_U449 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U449_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U449_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U449_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U467_clk = clk;
affine_controller__U450 op_hcompute_lgxx_stencil_1_port_controller_U467 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U467_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U467_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U467_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U485_clk = clk;
affine_controller__U468 op_hcompute_lgxx_stencil_1_port_controller_U485 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U485_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U485_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U485_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U503_clk = clk;
affine_controller__U486 op_hcompute_lgxx_stencil_1_port_controller_U503 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U503_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U503_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U503_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U521_clk = clk;
affine_controller__U504 op_hcompute_lgxx_stencil_1_port_controller_U521 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U521_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U521_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U521_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U539_clk = clk;
affine_controller__U522 op_hcompute_lgxx_stencil_1_port_controller_U539 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U539_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U539_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U539_d)
);
assign op_hcompute_lgxx_stencil_1_read_start = op_hcompute_lgxx_stencil_1_port_controller_valid;
assign op_hcompute_lgxx_stencil_1_write_start = op_hcompute_lgxx_stencil_1_exe_start_out;
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1845 op_hcompute_lgxx_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_exe_start_clk = clk;
assign op_hcompute_lgxx_stencil_exe_start_in = op_hcompute_lgxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_exe_start (
    .clk(op_hcompute_lgxx_stencil_exe_start_clk),
    .in(op_hcompute_lgxx_stencil_exe_start_in),
    .out(op_hcompute_lgxx_stencil_exe_start_out)
);
assign op_hcompute_lgxx_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U1824 op_hcompute_lgxx_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_port_controller_clk = clk;
affine_controller__U1803 op_hcompute_lgxx_stencil_port_controller (
    .clk(op_hcompute_lgxx_stencil_port_controller_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U341_clk = clk;
affine_controller__U324 op_hcompute_lgxx_stencil_port_controller_U341 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U341_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U341_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U341_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U359_clk = clk;
affine_controller__U342 op_hcompute_lgxx_stencil_port_controller_U359 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U359_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U359_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U359_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U377_clk = clk;
affine_controller__U360 op_hcompute_lgxx_stencil_port_controller_U377 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U377_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U377_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U377_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U395_clk = clk;
affine_controller__U378 op_hcompute_lgxx_stencil_port_controller_U395 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U395_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U395_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U395_d)
);
assign op_hcompute_lgxx_stencil_read_start = op_hcompute_lgxx_stencil_port_controller_valid;
assign op_hcompute_lgxx_stencil_write_start = op_hcompute_lgxx_stencil_exe_start_out;
assign op_hcompute_lgxx_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U1820 op_hcompute_lgxx_stencil_write_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_clk = clk;
cu_op_hcompute_lgxy_stencil op_hcompute_lgxy_stencil (
    .clk(op_hcompute_lgxy_stencil_clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write(op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign op_hcompute_lgxy_stencil_1_clk = clk;
assign op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[8] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[8];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[7] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[7];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[6] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[6];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[5] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[5];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[4] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[4];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[3] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[3];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[2] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[2];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[1] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[1];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[0] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[0];
cu_op_hcompute_lgxy_stencil_1 op_hcompute_lgxy_stencil_1 (
    .clk(op_hcompute_lgxy_stencil_1_clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .lxy_stencil_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .lgxy_stencil_op_hcompute_lgxy_stencil_1_write(op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign op_hcompute_lgxy_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgxy_stencil_1_exe_start_in = op_hcompute_lgxy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_1_exe_start (
    .clk(op_hcompute_lgxy_stencil_1_exe_start_clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_out)
);
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U1949 op_hcompute_lgxy_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_1_port_controller_clk = clk;
affine_controller__U1928 op_hcompute_lgxy_stencil_1_port_controller (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U1007_clk = clk;
affine_controller__U990 op_hcompute_lgxy_stencil_1_port_controller_U1007 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U1007_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U1007_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U1007_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U881_clk = clk;
affine_controller__U864 op_hcompute_lgxy_stencil_1_port_controller_U881 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U881_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U881_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U881_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U899_clk = clk;
affine_controller__U882 op_hcompute_lgxy_stencil_1_port_controller_U899 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U899_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U899_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U899_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U917_clk = clk;
affine_controller__U900 op_hcompute_lgxy_stencil_1_port_controller_U917 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U917_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U917_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U917_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U935_clk = clk;
affine_controller__U918 op_hcompute_lgxy_stencil_1_port_controller_U935 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U935_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U935_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U935_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U953_clk = clk;
affine_controller__U936 op_hcompute_lgxy_stencil_1_port_controller_U953 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U953_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U953_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U953_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U971_clk = clk;
affine_controller__U954 op_hcompute_lgxy_stencil_1_port_controller_U971 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U971_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U971_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U971_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U989_clk = clk;
affine_controller__U972 op_hcompute_lgxy_stencil_1_port_controller_U989 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U989_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U989_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U989_d)
);
assign op_hcompute_lgxy_stencil_1_read_start = op_hcompute_lgxy_stencil_1_port_controller_valid;
assign op_hcompute_lgxy_stencil_1_write_start = op_hcompute_lgxy_stencil_1_exe_start_out;
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U1945 op_hcompute_lgxy_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_exe_start_clk = clk;
assign op_hcompute_lgxy_stencil_exe_start_in = op_hcompute_lgxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_exe_start (
    .clk(op_hcompute_lgxy_stencil_exe_start_clk),
    .in(op_hcompute_lgxy_stencil_exe_start_in),
    .out(op_hcompute_lgxy_stencil_exe_start_out)
);
assign op_hcompute_lgxy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U1924 op_hcompute_lgxy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_port_controller_clk = clk;
affine_controller__U1903 op_hcompute_lgxy_stencil_port_controller (
    .clk(op_hcompute_lgxy_stencil_port_controller_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U809_clk = clk;
affine_controller__U792 op_hcompute_lgxy_stencil_port_controller_U809 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U809_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U809_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U809_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U827_clk = clk;
affine_controller__U810 op_hcompute_lgxy_stencil_port_controller_U827 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U827_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U827_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U827_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U845_clk = clk;
affine_controller__U828 op_hcompute_lgxy_stencil_port_controller_U845 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U845_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U845_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U845_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U863_clk = clk;
affine_controller__U846 op_hcompute_lgxy_stencil_port_controller_U863 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U863_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U863_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U863_d)
);
assign op_hcompute_lgxy_stencil_read_start = op_hcompute_lgxy_stencil_port_controller_valid;
assign op_hcompute_lgxy_stencil_write_start = op_hcompute_lgxy_stencil_exe_start_out;
assign op_hcompute_lgxy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U1920 op_hcompute_lgxy_stencil_write_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_clk = clk;
cu_op_hcompute_lgyy_stencil op_hcompute_lgyy_stencil (
    .clk(op_hcompute_lgyy_stencil_clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write(op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign op_hcompute_lgyy_stencil_1_clk = clk;
assign op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[8] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[8];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[7] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[7];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[6] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[6];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[5] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[5];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[4] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[4];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[3] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[3];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[2] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[2];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[1] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[1];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[0] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[0];
cu_op_hcompute_lgyy_stencil_1 op_hcompute_lgyy_stencil_1 (
    .clk(op_hcompute_lgyy_stencil_1_clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .lyy_stencil_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .lgyy_stencil_op_hcompute_lgyy_stencil_1_write(op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign op_hcompute_lgyy_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgyy_stencil_1_exe_start_in = op_hcompute_lgyy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_1_exe_start (
    .clk(op_hcompute_lgyy_stencil_1_exe_start_clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_out)
);
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2024 op_hcompute_lgyy_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_1_port_controller_clk = clk;
affine_controller__U2003 op_hcompute_lgyy_stencil_1_port_controller (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1205_clk = clk;
affine_controller__U1188 op_hcompute_lgyy_stencil_1_port_controller_U1205 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1205_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1205_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1205_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1223_clk = clk;
affine_controller__U1206 op_hcompute_lgyy_stencil_1_port_controller_U1223 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1223_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1223_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1223_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1241_clk = clk;
affine_controller__U1224 op_hcompute_lgyy_stencil_1_port_controller_U1241 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1241_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1241_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1241_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1259_clk = clk;
affine_controller__U1242 op_hcompute_lgyy_stencil_1_port_controller_U1259 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1259_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1259_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1259_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1277_clk = clk;
affine_controller__U1260 op_hcompute_lgyy_stencil_1_port_controller_U1277 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1277_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1277_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1277_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1295_clk = clk;
affine_controller__U1278 op_hcompute_lgyy_stencil_1_port_controller_U1295 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1295_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1295_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1295_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1313_clk = clk;
affine_controller__U1296 op_hcompute_lgyy_stencil_1_port_controller_U1313 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1313_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1313_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1313_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1331_clk = clk;
affine_controller__U1314 op_hcompute_lgyy_stencil_1_port_controller_U1331 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1331_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1331_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1331_d)
);
assign op_hcompute_lgyy_stencil_1_read_start = op_hcompute_lgyy_stencil_1_port_controller_valid;
assign op_hcompute_lgyy_stencil_1_write_start = op_hcompute_lgyy_stencil_1_exe_start_out;
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2020 op_hcompute_lgyy_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_exe_start_clk = clk;
assign op_hcompute_lgyy_stencil_exe_start_in = op_hcompute_lgyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_exe_start (
    .clk(op_hcompute_lgyy_stencil_exe_start_clk),
    .in(op_hcompute_lgyy_stencil_exe_start_in),
    .out(op_hcompute_lgyy_stencil_exe_start_out)
);
assign op_hcompute_lgyy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U1999 op_hcompute_lgyy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_port_controller_clk = clk;
affine_controller__U1978 op_hcompute_lgyy_stencil_port_controller (
    .clk(op_hcompute_lgyy_stencil_port_controller_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1133_clk = clk;
affine_controller__U1116 op_hcompute_lgyy_stencil_port_controller_U1133 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1133_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1133_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1133_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1151_clk = clk;
affine_controller__U1134 op_hcompute_lgyy_stencil_port_controller_U1151 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1151_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1151_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1151_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1169_clk = clk;
affine_controller__U1152 op_hcompute_lgyy_stencil_port_controller_U1169 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1169_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1169_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1169_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1187_clk = clk;
affine_controller__U1170 op_hcompute_lgyy_stencil_port_controller_U1187 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1187_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1187_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1187_d)
);
assign op_hcompute_lgyy_stencil_read_start = op_hcompute_lgyy_stencil_port_controller_valid;
assign op_hcompute_lgyy_stencil_write_start = op_hcompute_lgyy_stencil_exe_start_out;
assign op_hcompute_lgyy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U1995 op_hcompute_lgyy_stencil_write_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lxx_stencil_clk = clk;
assign op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
cu_op_hcompute_lxx_stencil op_hcompute_lxx_stencil (
    .clk(op_hcompute_lxx_stencil_clk),
    .grad_x_stencil_op_hcompute_lxx_stencil_read(op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read),
    .lxx_stencil_op_hcompute_lxx_stencil_write(op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign op_hcompute_lxx_stencil_exe_start_clk = clk;
assign op_hcompute_lxx_stencil_exe_start_in = op_hcompute_lxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxx_stencil_exe_start (
    .clk(op_hcompute_lxx_stencil_exe_start_clk),
    .in(op_hcompute_lxx_stencil_exe_start_in),
    .out(op_hcompute_lxx_stencil_exe_start_out)
);
assign op_hcompute_lxx_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1799 op_hcompute_lxx_stencil_exe_start_control_vars (
    .clk(op_hcompute_lxx_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lxx_stencil_port_controller_clk = clk;
affine_controller__U1778 op_hcompute_lxx_stencil_port_controller (
    .clk(op_hcompute_lxx_stencil_port_controller_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_valid),
    .d(op_hcompute_lxx_stencil_port_controller_d)
);
assign op_hcompute_lxx_stencil_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_lxx_stencil_port_controller_U233 (
    .clk(op_hcompute_lxx_stencil_port_controller_U233_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U233_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U233_d)
);
assign op_hcompute_lxx_stencil_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_lxx_stencil_port_controller_U251 (
    .clk(op_hcompute_lxx_stencil_port_controller_U251_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U251_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U251_d)
);
assign op_hcompute_lxx_stencil_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_lxx_stencil_port_controller_U269 (
    .clk(op_hcompute_lxx_stencil_port_controller_U269_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U269_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U269_d)
);
assign op_hcompute_lxx_stencil_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_lxx_stencil_port_controller_U287 (
    .clk(op_hcompute_lxx_stencil_port_controller_U287_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U287_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U287_d)
);
assign op_hcompute_lxx_stencil_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_lxx_stencil_port_controller_U305 (
    .clk(op_hcompute_lxx_stencil_port_controller_U305_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U305_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U305_d)
);
assign op_hcompute_lxx_stencil_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_lxx_stencil_port_controller_U323 (
    .clk(op_hcompute_lxx_stencil_port_controller_U323_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U323_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U323_d)
);
assign op_hcompute_lxx_stencil_read_start = op_hcompute_lxx_stencil_port_controller_valid;
assign op_hcompute_lxx_stencil_write_start = op_hcompute_lxx_stencil_exe_start_out;
assign op_hcompute_lxx_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lxx_stencil_write_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1795 op_hcompute_lxx_stencil_write_start_control_vars (
    .clk(op_hcompute_lxx_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_write_start_control_vars_out)
);
assign op_hcompute_lxy_stencil_clk = clk;
assign op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
assign op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
cu_op_hcompute_lxy_stencil op_hcompute_lxy_stencil (
    .clk(op_hcompute_lxy_stencil_clk),
    .grad_x_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read),
    .grad_y_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read),
    .lxy_stencil_op_hcompute_lxy_stencil_write(op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign op_hcompute_lxy_stencil_exe_start_clk = clk;
assign op_hcompute_lxy_stencil_exe_start_in = op_hcompute_lxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxy_stencil_exe_start (
    .clk(op_hcompute_lxy_stencil_exe_start_clk),
    .in(op_hcompute_lxy_stencil_exe_start_in),
    .out(op_hcompute_lxy_stencil_exe_start_out)
);
assign op_hcompute_lxy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1899 op_hcompute_lxy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lxy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lxy_stencil_port_controller_clk = clk;
affine_controller__U1878 op_hcompute_lxy_stencil_port_controller (
    .clk(op_hcompute_lxy_stencil_port_controller_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_valid),
    .d(op_hcompute_lxy_stencil_port_controller_d)
);
assign op_hcompute_lxy_stencil_port_controller_U665_clk = clk;
affine_controller__U648 op_hcompute_lxy_stencil_port_controller_U665 (
    .clk(op_hcompute_lxy_stencil_port_controller_U665_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U665_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U665_d)
);
assign op_hcompute_lxy_stencil_port_controller_U683_clk = clk;
affine_controller__U666 op_hcompute_lxy_stencil_port_controller_U683 (
    .clk(op_hcompute_lxy_stencil_port_controller_U683_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U683_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U683_d)
);
assign op_hcompute_lxy_stencil_port_controller_U701_clk = clk;
affine_controller__U684 op_hcompute_lxy_stencil_port_controller_U701 (
    .clk(op_hcompute_lxy_stencil_port_controller_U701_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U701_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U701_d)
);
assign op_hcompute_lxy_stencil_port_controller_U719_clk = clk;
affine_controller__U702 op_hcompute_lxy_stencil_port_controller_U719 (
    .clk(op_hcompute_lxy_stencil_port_controller_U719_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U719_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U719_d)
);
assign op_hcompute_lxy_stencil_port_controller_U737_clk = clk;
affine_controller__U720 op_hcompute_lxy_stencil_port_controller_U737 (
    .clk(op_hcompute_lxy_stencil_port_controller_U737_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U737_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U737_d)
);
assign op_hcompute_lxy_stencil_port_controller_U755_clk = clk;
affine_controller__U738 op_hcompute_lxy_stencil_port_controller_U755 (
    .clk(op_hcompute_lxy_stencil_port_controller_U755_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U755_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U755_d)
);
assign op_hcompute_lxy_stencil_port_controller_U773_clk = clk;
affine_controller__U756 op_hcompute_lxy_stencil_port_controller_U773 (
    .clk(op_hcompute_lxy_stencil_port_controller_U773_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U773_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U773_d)
);
assign op_hcompute_lxy_stencil_port_controller_U791_clk = clk;
affine_controller__U774 op_hcompute_lxy_stencil_port_controller_U791 (
    .clk(op_hcompute_lxy_stencil_port_controller_U791_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U791_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U791_d)
);
assign op_hcompute_lxy_stencil_read_start = op_hcompute_lxy_stencil_port_controller_valid;
assign op_hcompute_lxy_stencil_write_start = op_hcompute_lxy_stencil_exe_start_out;
assign op_hcompute_lxy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lxy_stencil_write_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1895 op_hcompute_lxy_stencil_write_start_control_vars (
    .clk(op_hcompute_lxy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lyy_stencil_clk = clk;
assign op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
cu_op_hcompute_lyy_stencil op_hcompute_lyy_stencil (
    .clk(op_hcompute_lyy_stencil_clk),
    .grad_y_stencil_op_hcompute_lyy_stencil_read(op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read),
    .lyy_stencil_op_hcompute_lyy_stencil_write(op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_lyy_stencil_exe_start_clk = clk;
assign op_hcompute_lyy_stencil_exe_start_in = op_hcompute_lyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lyy_stencil_exe_start (
    .clk(op_hcompute_lyy_stencil_exe_start_clk),
    .in(op_hcompute_lyy_stencil_exe_start_in),
    .out(op_hcompute_lyy_stencil_exe_start_out)
);
assign op_hcompute_lyy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U1974 op_hcompute_lyy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lyy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lyy_stencil_port_controller_clk = clk;
affine_controller__U1953 op_hcompute_lyy_stencil_port_controller (
    .clk(op_hcompute_lyy_stencil_port_controller_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_valid),
    .d(op_hcompute_lyy_stencil_port_controller_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1025_clk = clk;
affine_controller__U1008 op_hcompute_lyy_stencil_port_controller_U1025 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1025_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1025_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1025_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1043_clk = clk;
affine_controller__U1026 op_hcompute_lyy_stencil_port_controller_U1043 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1043_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1043_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1043_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1061_clk = clk;
affine_controller__U1044 op_hcompute_lyy_stencil_port_controller_U1061 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1061_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1061_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1061_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1079_clk = clk;
affine_controller__U1062 op_hcompute_lyy_stencil_port_controller_U1079 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1079_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1079_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1079_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1097_clk = clk;
affine_controller__U1080 op_hcompute_lyy_stencil_port_controller_U1097 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1097_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1097_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1097_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1115_clk = clk;
affine_controller__U1098 op_hcompute_lyy_stencil_port_controller_U1115 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1115_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1115_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1115_d)
);
assign op_hcompute_lyy_stencil_read_start = op_hcompute_lyy_stencil_port_controller_valid;
assign op_hcompute_lyy_stencil_write_start = op_hcompute_lyy_stencil_exe_start_out;
assign op_hcompute_lyy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lyy_stencil_write_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U1970 op_hcompute_lyy_stencil_write_start_control_vars (
    .clk(op_hcompute_lyy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_write_start_control_vars_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = _U2308_out;
cu_op_hcompute_padded16_global_wrapper_stencil op_hcompute_padded16_global_wrapper_stencil (
    .clk(op_hcompute_padded16_global_wrapper_stencil_clk),
    .padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read),
    .padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write(op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_in = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_padded16_global_wrapper_stencil_exe_start (
    .clk(op_hcompute_padded16_global_wrapper_stencil_exe_start_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U1749 op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U1728 op_hcompute_padded16_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_padded16_global_wrapper_stencil_port_controller_U107 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_padded16_global_wrapper_stencil_port_controller_U17 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_padded16_global_wrapper_stencil_port_controller_U35 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_padded16_global_wrapper_stencil_port_controller_U53 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_padded16_global_wrapper_stencil_port_controller_U71 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_padded16_global_wrapper_stencil_port_controller_U89 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_read_start = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_padded16_global_wrapper_stencil_write_start = op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U1745 op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out)
);
assign padded16_global_wrapper_stencil_clk = clk;
assign padded16_global_wrapper_stencil_flush = flush;
assign padded16_global_wrapper_stencil_rst_n = rst_n;
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren = op_hcompute_grad_x_stencil_read_start;
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren = op_hcompute_grad_y_stencil_read_start;
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen = op_hcompute_padded16_global_wrapper_stencil_write_start;
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[2];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[1];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0];
padded16_global_wrapper_stencil_ub padded16_global_wrapper_stencil (
    .clk(padded16_global_wrapper_stencil_clk),
    .flush(padded16_global_wrapper_stencil_flush),
    .rst_n(padded16_global_wrapper_stencil_rst_n),
    .op_hcompute_grad_x_stencil_read_ren(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren),
    .op_hcompute_grad_x_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars),
    .op_hcompute_grad_x_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .op_hcompute_grad_y_stencil_read_ren(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren),
    .op_hcompute_grad_y_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars),
    .op_hcompute_grad_y_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .op_hcompute_padded16_global_wrapper_stencil_write_wen(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen),
    .op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_padded16_global_wrapper_stencil_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid = op_hcompute_padded16_global_wrapper_stencil_read_start;
endmodule


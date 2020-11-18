#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("input_copy_stencil_values_V_val_V_dout", 16, hls_in, 0, "ap_fifo", "fifo_data", 16384),
	Port_Property("input_copy_stencil_values_V_val_V_empty_n", 1, hls_in, 0, "ap_fifo", "fifo_status", 16384),
	Port_Property("input_copy_stencil_values_V_val_V_read", 1, hls_out, 0, "ap_fifo", "fifo_update", 16384),
	Port_Property("hw_output_stencil_values_V_val_V_din", 16, hls_out, 1, "ap_fifo", "fifo_data", 16384),
	Port_Property("hw_output_stencil_values_V_val_V_full_n", 1, hls_in, 1, "ap_fifo", "fifo_status", 16384),
	Port_Property("hw_output_stencil_values_V_val_V_write", 1, hls_out, 1, "ap_fifo", "fifo_update", 16384),
};
const char* HLS_Design_Meta::dut_name = "down_sample";

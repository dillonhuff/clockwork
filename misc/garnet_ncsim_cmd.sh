irun \
	-top Interconnect_tb \
	-timescale 1ns/1ns \
	-input Interconnect_cmd.tcl \
	/aha/garnet/temp/garnet/Interconnect_tb.sv \
	Interconnect.sv \
	sram_512w_16b.v \
	DW_fp_addsub.v \
	DW_fp_mult.v \
	DW_fp_add.v \
	AO22D0BWP16P90.sv \
	Interconnect.sv \
	AN2D0BWP16P90.sv \
	-notimingchecks \
	-neverwarn

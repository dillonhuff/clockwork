create_clock -name ap_clk -period 5.000 [get_ports ap_clk]


set_property IOSTANDARD LVCMOS18 [get_ports *]


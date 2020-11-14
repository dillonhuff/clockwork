read_verilog -sv resnet.v resnet_verilog_collateral.sv

synth_design -top resnet -part xc7k160tfbg484-2 -flatten_hierarchy rebuilt
opt_design

place_design
route_design

report_utilization -file utilization.txt
report_timing -file timing.txt


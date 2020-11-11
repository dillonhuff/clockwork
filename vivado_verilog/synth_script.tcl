read_verilog -sv resnet/resnet.v resnet/resnet_verilog_collateral.sv
read_xdc test.xdc
synth_design -top resnet -part xc7k160tfbg484-2 -flatten_hierarchy rebuilt
opt_design

#place_design
#route_design

report_utilization -file utilization.txt
report_timing -file timing.txt


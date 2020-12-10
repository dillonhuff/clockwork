#-----------------------------------------------------------
# Vivado v2019.1 (64-bit)
# SW Build 2552052 on Fri May 24 14:47:09 MDT 2019
# IP Build 2548770 on Fri May 24 18:01:18 MDT 2019
# Start of session at: Wed Nov 11 18:39:04 2020
# Process ID: 10151
# Current directory: /home/ziheng/clockwork_synth/test_tcl
# Command line: vivado -journal log/resnet.jou -log log/resnet.log -mode gui
# Log file: /home/ziheng/clockwork_synth/test_tcl/log/resnet.log
# Journal file: /home/ziheng/clockwork_synth/test_tcl/log/resnet.jou
#-----------------------------------------------------------
create_project resnet /nobackup/zihengw/resnet_new/resnet_1 -part xc7k70tfbv676-1
add_files -norecurse {/nobackup/zihengw/resnet_new/src/resnet_verilog_collateral.sv /nobackup/zihengw/resnet_new/src/resnet.v}
add_files -fileset sim_1 -norecurse /nobackup/zihengw/resnet_new/tb/resnet_tb.sv
import_files -force -norecurse
update_compile_order -fileset sources_1
update_compile_order -fileset sources_1
set_property file_type SystemVerilog [get_files  /nobackup/zihengw/resnet_new/resnet_1/resnet.srcs/sources_1/imports/src/resnet.v]
set_property top resnet [get_filesets sources_1]
set_property top resnet_tb [get_filesets sim_1]
#launch_simulation
read_xdc test.xdc
synth_design -top resnet -part xczu7ev-ffvc1156-2-e -flatten_hierarchy rebuilt
opt_design
place_design
route_design

report_utilization -file utilization.txt
report_timing -file timing.txt
report_power -file power.txt

#source resnet_tb.tcl
#run 1000 ns
#run 500 us

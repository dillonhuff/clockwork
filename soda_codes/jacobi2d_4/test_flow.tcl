set outputDir ./test_pnr
file mkdir $outputDir

read_verilog [ glob ./soda_jacobi2d_4_proj/solution1/impl/verilog/*.v ]

read_xdc full_xdc.xdc
#./soda_jacobi2d_4_proj/solution1/impl/ip/constraints/jacobi2d_4_kernel_ooc.xdc

<<<<<<< HEAD
#set Device "xc7k70tfbg676-2"
set Device "xc7vx485tffg1761-2"
=======
set Device "xc7k70tfbg676-2"
>>>>>>> origin/master
synth_design -top jacobi2d_4_kernel -part $Device

write_checkpoint -force $outputDir/post_synth.dcp
report_timing_summary -file $outputDir/post_synth_timing.rpt
report_utilization -file $outputDir/post_synth_util.rpt

<<<<<<< HEAD
puts [get_ports *]

place_ports [get_ports *]

=======
>>>>>>> origin/master
opt_design
place_design

phys_opt_design

write_checkpoint -force $outputDir/post_place.dcp
report_timing_summary -file $outputDir/post_place_timing.rpt
report_utilization -file $outputDir/post_place_util.rpt

route_design

write_checkpoint -force $outputDir/post_route.dcp

report_timing_summary -file $outputDir/post_route_timing.rpt
report_route_status -file $outputDir/post_route_status.rpt
report_power -file $outputDir/post_route_power.rpt
report_drc -file $outputDir/post_route_drc.rpt

write_verilog -force $outputDir/jacobi2d_4_proj_netlist.v -mode timesim -sdf_anno true

write_bitstream -force $outputDir/jacobi2d_4_proj.bit



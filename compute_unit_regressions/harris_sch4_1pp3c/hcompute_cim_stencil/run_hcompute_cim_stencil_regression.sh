verilator -Wall --cc hcompute_cim_stencil.v --exe --build hcompute_cim_stencil_compute_tb.cpp --top-module hcompute_cim_stencil -Wno-UNUSED -Wno-WIDTH -Wno-PINMISSING -Wno-DECLFILENAME
./obj_dir/Vhcompute_cim_stencil

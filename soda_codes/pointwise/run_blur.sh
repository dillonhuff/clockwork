~/soda-compiler/src/sodac pointwise.soda --xocl-kernel soda_pointwise.cpp
~/soda-compiler/src/sodac pointwise.soda --xocl-header soda_pointwise.h
~/soda-compiler/src/sodac pointwise.soda --xocl-host soda_host.cpp
vivado_hls -f soda_pointwise_hls.tcl


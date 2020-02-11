app=$1
~/soda-compiler/src/sodac $app.soda --xocl-kernel soda_$app.cpp
~/soda-compiler/src/sodac $app.soda --xocl-header soda_$app.h
~/soda-compiler/src/sodac $app.soda --xocl-host soda_host.cpp
vivado_hls -f soda_${app}_hls.tcl


#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/users/isabdr/clockwork/conv_3_3_halide_proj/solution1/.autopilot/db/a.g.bc ${1+"$@"}

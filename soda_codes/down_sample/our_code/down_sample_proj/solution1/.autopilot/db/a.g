#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dhuff/clockwork/soda_codes/down_sample/our_code/down_sample_proj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
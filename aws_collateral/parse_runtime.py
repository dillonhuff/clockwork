#!/usr/bin/env python3

import json
import os
import sys 
import re
import os

n = len(sys.argv) 
print("Total arguments passed:", n) 
assert(n == 2)

app = sys.argv[1]

print('app =', app)
import glob

vpp_log_name = "v++_{0}.log".format(app)
hls_log_name = "/vivado_hls.log"

found_hls = False
found_vpp = False

os.system('rm -rf our_code')
os.system('rm -rf soda_code')
os.system('../aws_collateral/get_logs.sh {0}'.format(app))
directory = './'
for filename in glob.iglob(directory + '**/*', recursive=True):
  if filename.endswith(hls_log_name):
    print('File:', filename)
    lines = open(filename, 'r').readlines()
    # target = "^INFO\: \[HLS 200-112\] Total elapsed time\: (\d+)\.86 seconds*"
    target = "^INFO\: \[HLS 200-112\] Total elapsed time\: (\d+)*"
    for l in lines:
      x = re.match(target, l)
      if x:
        assert(not found_hls)
        hls_seconds = int(x.group(1))
        found_hls = True
        print('--- HLS time:', hls_seconds)

  if filename.endswith(vpp_log_name):
    print('File:', filename)
    lines = open(filename, 'r').readlines()
    for l in lines:
      target = "^INFO\: \[v\+\+ 60-791\] Total elapsed time\: (\d+)h (\d+)m (\d+)s"
      x = re.match(target, l) 
      if x:
        assert(not found_vpp)
        print('Line: ', l)
        hrs = int(x.group(1))
        mins = int(x.group(2))
        secs = int(x.group(3))
        total_seconds = hrs*60*60 + mins*60 + secs
        found_vpp = True
        vpp_seconds = total_seconds
        print('Seconds in v++:', total_seconds)

assert(found_vpp)
assert(found_hls)
total_compile_time = vpp_seconds + hls_seconds
print('Total compile time:', total_compile_time)

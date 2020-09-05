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
stage_starts = {}
stage_ends = {}
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
      target = "\[(\d+)\:(\d+)\:(\d+)\] Starting (.*)"
      x = re.match(target, l) 
      if x:
        t = int(x[1])*3600 + int(x[2])*60 + int(x[3])
        # print('\tSTART line:', x[0], 'time:', t)
        stage_starts[x[4]] = t

      target = "\[(\d+)\:(\d+)\:(\d+)\] Finished .* tasks \((.*)\)"
      x = re.match(target, l) 
      if x:
        t = int(x[1])*3600 + int(x[2])*60 + int(x[3])
        # print('\tEND line  :', x[0], 'time:', t)
        stage_ends[x[4]] = t

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

print('Stage ends...')
for s in stage_ends:
  print('\t', s, '->', stage_ends[s])

print('Stage starts...')
for s in stage_starts:
  print('\t', s, '->', stage_starts[s])

for s in stage_ends:
  if s in stage_starts:
    elapsed = stage_ends[s] - stage_starts[s]
    assert(elapsed >= 0.0)
    print('\t', s, '->', elapsed)

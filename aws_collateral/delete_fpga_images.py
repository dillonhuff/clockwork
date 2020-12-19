#!/usr/bin/env python3

import re
import json
import os
import sys 


n = len(sys.argv) 
print("Total arguments passed:", n) 
assert(n == 2)

files = sys.argv[1]

print("Deleting all images in: ", files)

lines = open(files, 'r').readlines()

for l in lines:
  print(l)
  target = "\s*\"FpgaImageId\"\: \"(.*)\","
  x = re.match(target, l)
  assert(x)
  print("Id = ", x.group(1))
  os.system("aws ec2 delete-fpga-image --fpga-image-id {0}".format(x.group(1)))


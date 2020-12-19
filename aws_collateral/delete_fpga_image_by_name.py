#!/usr/bin/env python3

import re
import json
import os
import sys 


n = len(sys.argv) 
print("Total arguments passed:", n) 
assert(n == 2)

target_image = sys.argv[1]

print("Deleting ", target_image)

os.system('aws ec2 describe-fpga-images >& fpgas.txt')
fpgas = open('fpgas.txt').read()
fpga_strings = json.loads(fpgas)

deleted = False
for image in fpga_strings["FpgaImages"]:
  # print(image)
  if "Name" in image and image["Name"] == target_image:
    os.system("aws ec2 delete-fpga-image --fpga-image-id {0}".format(sys.stderr.write(image["FpgaImageId"])))
    deleted = True
    break

if deleted:
  print('Deleted image')

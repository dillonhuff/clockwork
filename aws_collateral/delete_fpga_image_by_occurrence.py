#!/usr/bin/env python3

import re
import json
import os
import sys 


n = len(sys.argv) 
print("Total arguments passed:", n) 
assert(n == 2)

num_to_del = sys.argv[1]

print("Deleting ", num_to_del, "FPGA images")

os.system('aws ec2 describe-fpga-images >& fpgas.txt')
fpgas = open('fpgas.txt').read()
fpga_strings = json.loads(fpgas)

deleted = 0
for image in fpga_strings["FpgaImages"]:
  if image["OwnerId"] == "280565996523":
    if deleted < num_to_del:
      print('Deleting...')
      print(image)

      os.system("aws ec2 delete-fpga-image --fpga-image-id {0}".format((image["FpgaImageId"])))

      deleted += 1


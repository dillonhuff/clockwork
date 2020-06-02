#!/usr/bin/env python3

import json
import os
import sys 
  
# total arguments 
n = len(sys.argv) 
# print("Total arguments passed:", n) 
assert(n == 2)

target_image = sys.argv[1]
  
# print("\nName of Python script:", sys.argv[0]) 
# print('target image =', target_image)

# print('Getting afid')
os.system('aws ec2 describe-fpga-images >& fpgas.txt')
fpgas = open('fpgas.txt').read()
fpga_strings = json.loads(fpgas)

# print(fpga_strings)
# print('FPGAs length =', len(fpga_strings))

for image in fpga_strings["FpgaImages"]:
  if "Name" in image and image["Name"] == target_image:
    sys.stderr.write(image["FpgaImageGlobalId"])
    # print(image["FpgaImageGlobalId"])
    break



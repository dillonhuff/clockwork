#!/usr/bin/env python

import json
import os

print('Getting afid')
os.system('aws ec2 describe-fpga-images >& fpgas.txt')
fpgas = open('fpgas.txt').read()
fpga_strings = json.loads(fpgas)

# print(fpga_strings)
# print('FPGAs length =', len(fpga_strings))

for image in fpga_strings["FpgaImages"]:
  if "Name" in image and image["Name"] == "sbl_16_opt":
    print(image["FpgaImageGlobalId"])
    break



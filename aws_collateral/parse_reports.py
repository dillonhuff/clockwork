#!/usr/bin/env python3

import json
import os
import sys 

import os

n = len(sys.argv) 
print("Total arguments passed:", n) 
assert(n == 2)

app = sys.argv[1]

print('app =', app)

os.system('../aws_collateral/get_reports.sh {0}'.format(app))

# TODO: Clear reports

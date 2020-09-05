import re

f = open('./misc/compile_time_table.tex').readlines()

for l in f:
    rm = "(.*)\\\\\\\\"
    if re.match(rm, l):
        print(l)

import re

f = open('./misc/compile_time_table.tex').readlines()

for l in f:
    rm = "(.*)\\\\\\\\"
    m = re.match(rm, l)
    if m:
        print(l)
        values = m[1].split('&')
        print('\t', values)



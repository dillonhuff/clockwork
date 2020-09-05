import re

f = open('./misc/compile_time_table.tex').readlines()

def is_float(s):
    try:
        float(s)
        return True
    except ValueError:
        return False

for l in f:
    rm = "(.*)\\\\\\\\"
    m = re.match(rm, l)
    if m:
        print(l)
        values = m[1].split('&')
        if is_float(values[1]) and is_float(values[2]):
            print('\t&', float(values[1]) / float(values[2]) * 100)



import re

f = open('./misc/soda_comparison_table.tex').readlines()

def is_float(s):
    try:
        float(s)
        return True
    except ValueError:
        return False

lines = []
for l in f:
    rm = "(.*)\\\\\\\\"
    m = re.match(rm, l)
    if m:
        values = m[1].split('&')
        if is_float(values[1]):
            print(l)
            lines.append(values)


print(lines)

assert(len(lines) % 2 == 0)

for i in range(len(lines) // 2):
    print(lines[i], lines[i + 1])

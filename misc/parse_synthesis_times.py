import re

f = open('./misc/multi_rate_compile_times_table.tex').readlines()

def intersperse(lst, item):
    result = [item] * (len(lst) * 2 - 1)
    result[0::2] = lst
    return result

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
        try:
            values = m[1].split('&')
            # print(values[5])
            rm = "\s*(\d+)\s+(\d+)\s*"
            m = re.match(rm, values[5])
            if m:
                v = values
                values[5] = str(float(m[1]) + float(m[2]))
                values = intersperse(values, ' & ')
                values.append(' \\')
                print(values)
        except ValueError:
            continue



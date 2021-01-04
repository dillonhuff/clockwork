import re

f = open('./misc/soda_comparison_standalone_large.tex').readlines()

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

def table_op(table_lines, func):
    lines = []
    # res = ''
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            print(l)
            print(m[0])
            values = [e.strip() for e in m[1].split('&')]
            if is_float(values[1]):
                # values = func(values)
                # res += ' & '.join(values) + ' \\\\' + '\n'
                lines.append(values)
    return lines 

def sum_double_entry(values):
    rm = "\s*(\d+)\s+(\d+)\s*"
    m = re.match(rm, values[5])
    if m:
        v = values
        values[5] = str(float(m[1]) + float(m[2]))
    return values

def entry_to_int(values):
    try:
        values[5] = int(float(values[5]))
    except:
        return values
    return values

res = table_op(f, sum_double_entry)
print(res)


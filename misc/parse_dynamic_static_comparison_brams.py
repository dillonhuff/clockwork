import re

f = open('./tables/dynamic_static_comparison.tex').readlines()

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
    res = ''
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            try:
                values = m[1].split('&')
                values = func(values)
                res += ' & '.join(values) + ' \\\\' + '\n'
            except:
                res += l
        else:
            res += l
    return res

def sum_double_entry(values):
    rm = "\s*(\d+)\s+(\d+)\s*"
    m = re.match(rm, values[5])
    if m:
        v = values
        values[5] = str(float(m[1]) + float(m[2]))
    return values

def entry_to_int(values):
    # print(values)
    try:
        values[5] = int(float(values[5]))
    except:
        return values
    return values

def extract_mem(values):
    rm = "(.*)\[(.*)\\\%\]"
    fvalues = []

    i = 0;
    for v in values:
        if i < 3:
            fvalues.append(v)
        elif i == 4 or i == 5 or i == 6:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            fvalues.append(m[1])
        i += 1

    return fvalues

res = table_op(f, extract_mem)
print(res)


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
                # rm = "\s*(\d+)\s+(\d+)\s*"
                # m = re.match(rm, values[5])
                # if m:
                    # v = values
                    # values[5] = str(float(m[1]) + float(m[2]))
                    # res += ' & '.join(values) + ' \\\\' + '\n'
                # else:
                    # res += l
            except ValueError:
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

res = table_op(f, sum_double_entry)
print(res)

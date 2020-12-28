import re

f = open('./misc/soda_resource_comparison_table.tex').readlines()

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
    apps_to_system_to_use = {}
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            values = m[1].split('&')
            if is_float(values[1]):
                app_name = values[0]
                apps_to_system_to_use[app_name] = {}

    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            values = m[1].split('&')
            if is_float(values[1]):
                system = values[2]
                app_name = values[0]
                apps_to_system_to_use[app_name][system] = {}

    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            values = m[1].split('&')
            if is_float(values[1]):
                system = values[2]
                app_name = values[0]
                luts = int(values[3])
                ffs = int(values[5])
                brams = int(values[6])
                apps_to_system_to_use[app_name][system]['lut'] = luts


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

# Q: What do I want to do with this file?
# A: I want to build a bar chart comparing SODA
# and clockworks resource use. That means
# re-organizing the code to produce lists
# of LUT, FF, BRAM use by system
res = table_op(f, sum_double_entry)
# print(res)

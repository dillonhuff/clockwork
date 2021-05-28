import re
import matplotlib.pyplot as plt
from matplotlib import cm
import numpy as np
from matplotlib import colors
from matplotlib.ticker import PercentFormatter
from cycler import cycler
import copy


f = open('./tables/dynamic_static_comparison_2_orig.tex').readlines()

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

labels = []
bvalues = []
def extract_percentage(values):
    print('calling extract percentage on', values)
    fvs = copy.deepcopy(values)
    print('fvs:', fvs)
    comp = copy.deepcopy(fvs[1])
    fvs[1] = fvs[2]
    print('fvs:', fvs)
    fvs[2] = comp
    return fvs;
    # fvs[0]
    # print('Extracting percentage...')
    # rm = "(.*)\[(.*)\\\%\]"
    # fvalues = []

    # i = 0;
    # max_util = -100000

    # labels.append(values[0].strip() + ' ' + values[1].strip() + ' ' + values[2].strip())
    # for v in values:
        # if i < 3:
            # fvalues.append(v)
        # else:
            # m = re.match(rm, v)
            # if m:
                # print(v, 'matches, now false')
                # print('Group0:', m[0])
                # print('Group1:', m[1])
                # print('Group2:', m[2])
                # if float(m[2]) > max_util:
                    # max_util = float(m[2])
            # # else:
                # # fvalues.append(v)
        # i += 1

    # print('Appending to values:')
    # bvalues.append(max_util)
    # fvalues.append(str(max_util))
    # return fvalues

res = table_op(f, extract_percentage)
print(res)

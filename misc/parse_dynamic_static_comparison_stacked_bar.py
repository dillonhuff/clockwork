import re
import matplotlib.pyplot as plt
from matplotlib import cm
import numpy as np
from matplotlib import colors
from matplotlib.ticker import PercentFormatter
from cycler import cycler

plt.style.use('seaborn-pastel')
f = open('./tables/dynamic_static_comparison_2.tex').readlines()

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

bvalues = []
lutasmem = []
ff = []
bram = []

labels = []
def extract_lut(values):
    rm = "(.*)\[(.*)\\\%\]"
    fvalues = []

    i = 0;
    # labels.append(values[0].strip() + ' ' + values[1].strip() + ' ' + values[2].strip())
    labels.append(values[2].strip())
    for v in values:
        if i < 3:
            fvalues.append(v)
        # LUT
        elif i == 3:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            fvalues.append(m[1])
            bvalues.append(float(m[1]))
        # LUTASMEM
        elif i == 4:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            lutasmem.append(float(m[2]))
        # FF
        elif i == 5:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            ff.append(float(m[2]))
        # BRAM
        elif i == 6:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            bram.append(float(m[2]))
        i += 1

    return fvalues

res = table_op(f, extract_lut)
print(res)

major_labels = labels[1:] # ['app'] * len(lutasmem)
print('major labels:', major_labels)
print('lutasmem    :', lutasmem)

# x = np.arange(len(major_labels))  # the label locations

ind = 0
xs = []
for i in range(len(major_labels)):
    ind += 1
    if i > 0 and i % 4 == 0:
        ind += 1
    xs.append(ind)

x = np.array(xs)
print('X = ', x)

men_means = [20, 35, 30, 35, 27]
women_means = [25, 32, 34, 20, 25]
width = 0.75      # the width of the bars: can also be len(x) sequence

fig, ax = plt.subplots(figsize=(12, 6))
ax.set_axisbelow(True)
ax.grid(axis='y')

assert(len(bram) == len(ff))
assert(len(lutasmem) == len(ff))

bram_offset = np.array(ff) + np.array(lutasmem)
print('bram offset:', bram_offset)

# font = {'family' : 'normal',
        # 'size'   : 10}
# plt.rc('font', **font)

ax.bar(x, lutasmem, width, edgecolor='black', label='LUTAsMem')
ax.bar(x, ff, width, bottom=lutasmem, edgecolor='black', label='FF')
ax.bar(x, bram, width, bottom=bram_offset, edgecolor='black', label='BRAM')

ax.set_xticks(x)
ax.set_xticklabels(major_labels)

ax.legend()
plt.xticks(rotation=90)
plt.gcf().subplots_adjust(bottom=0.15)

plt.show()
fig.savefig('clockwork_fifo_mem_utilizations.eps', format='eps')






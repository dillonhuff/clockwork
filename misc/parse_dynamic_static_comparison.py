import re
import matplotlib.pyplot as plt
from matplotlib import cm
import numpy as np
from matplotlib import colors
from matplotlib.ticker import PercentFormatter
from cycler import cycler


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

labels = []
bvalues = []
def extract_percentage(values):
    print('Extracting percentage...')
    rm = "(.*)\[(.*)\\\%\]"
    fvalues = []

    i = 0;
    max_util = -100000

    labels.append(values[0].strip() + ' ' + values[1].strip() + ' ' + values[2].strip())
    for v in values:
        if i < 3:
            fvalues.append(v)
        else:
            m = re.match(rm, v)
            if m:
                print(v, 'matches, now false')
                print('Group0:', m[0])
                print('Group1:', m[1])
                print('Group2:', m[2])
                if float(m[2]) > max_util:
                    max_util = float(m[2])
            # else:
                # fvalues.append(v)
        i += 1

    print('Appending to values:')
    bvalues.append(max_util)
    fvalues.append(str(max_util))
    return fvalues

res = table_op(f, extract_percentage)
print(res)

plt.style.use('seaborn-pastel')

labels.pop(0)
bvalues.pop(0)
colors = ['cyan', 'blue', 'green', 'yellow']

def get_cmap(n, name='hsv'):
    '''Returns a function that maps each index in 0, 1, ..., n-1 to a distinct 
    RGB color; the keyword argument name must be a standard mpl colormap name.'''
    return plt.cm.get_cmap(name, n)

# colors = []
# for i in range(4):
    # colors.append(get_cmap(4)(i))
# i = -1
# def getCycledColor():
    # global i, colors
    # if i < len(colors) -1:
        # i = i + 1
        # return colors[i]
    # else:
        # i = -1

# prop = plt.rcParams['axes.prop_cycle']
# colors = []
# i = 0
# for c in prop:
    # colors.append(c)
    # if i >= 4:
        # break;

colorlist = []
for v in range(len(bvalues)):
    colorlist.append(colors[v % len(colors)])

assert(len(colorlist) == len(bvalues))
assert(len(bvalues) % 4 == 0)

policies = []
arch_labels = []
for i in range(4):
    policies.append([])
    arch_labels.append([])

for i in range(len(bvalues)):
    elem = bvalues[i]
    policies[i % 4].append(elem)
    arch_labels[i % 4].append(labels[i])


categories = policies

fig, ax = plt.subplots(1, 1, sharey=True, tight_layout=True, figsize=(12, 6))

width = 1.0
margin = 0.2
inter_bar_margin = 0.05
bar_width = (width - margin - inter_bar_margin*(len(categories) - 1))/4.0


use_offset = len(categories) % 2 == 1
x = np.arange(len(categories[0]))  # the label locations

ax.grid(axis='y')
bar_cycle = (cycler('edgecolor', 'k')*cycler('zorder', [10]))
styles = bar_cycle()
offset = bar_width / 2.0 if use_offset else 0.0

# compute max position
max_pos = -bar_width - offset - inter_bar_margin*3.0
for i in range(len(categories) - 1):
    max_pos += bar_width
    max_pos += inter_bar_margin


minor_labels = ['SODA', 'CWS', 'CWD32', 'CWDsmall']

pos = max_pos
rects = []
for i in range(len(categories)):
    rects.append(ax.bar(x - pos, categories[i], bar_width, **next(styles), label=minor_labels[i])) #arch_labels[i]))
    pos -= bar_width
    pos -= inter_bar_margin

major_labels = ['Blur 1', 'Blur 16', 'Blur 32', 'SBL 1', 'SBL 16', 'SBL 32', 'CP 1', 'CP 16', 'CP 32', 'Jac 1', 'Jac 16', 'Jac 32']
ax.set_xticks(x)
ax.set_xticklabels(major_labels)

ax.legend()

plt.show()
fig.savefig('clockwork_fifo_utilizations.eps', format='eps')

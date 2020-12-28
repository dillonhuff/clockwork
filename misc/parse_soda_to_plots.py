import re
import matplotlib.pyplot as plt
import numpy as np

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
    lines = []
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            values = m[1].split('&')
            if is_float(values[1]):
                stripped = [element.strip() for element in values]
                lines.append(stripped)
    print(lines)
    apps = {}
    apps['blur'] = {}
    apps['blur']['SODA'] = []
    apps['blur']['CW'] = []
    for l in lines:
        if l[0] == 'blur':
            print(l[2])
            apps['blur'][l[2]].append(float(l[3]))
    print('App luts: {0}'.format(apps))

    N = len(apps['blur']['SODA'])
    menMeans = apps['blur']['SODA']

    ind = np.arange(N)  # the x locations for the groups
    width = 0.35       # the width of the bars

    fig = plt.figure()
    ax = fig.add_subplot(111)
    rects1 = ax.bar(ind, menMeans, width)

    womenMeans= apps['blur']['CW']
    rects2 = ax.bar(ind+width, womenMeans, width)

    # add some
    ax.set_ylabel('Scores')
    ax.set_title('Scores by group and gender')
    ax.set_xticks(ind + width / 2)
    ax.set_xticklabels( ('Blur 1', 'Blur 2', 'Blur 3', 'Blur 4', 'Blur 5') )

    ax.legend( (rects1[0], rects2[0]), ('SODA', 'CW') )

    plt.show()

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

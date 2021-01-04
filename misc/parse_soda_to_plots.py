import re
import matplotlib.pyplot as plt
import numpy as np

# f = open('./misc/soda_resource_comparison_table.tex').readlines()
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
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            values = m[1].split('&')
            if is_float(values[1]):
                stripped = [element.strip() for element in values]
                lines.append(stripped)
    print(lines)

    app_names = ['Blur', 'CP', 'Sobel', 'Jacobi']
    systems = ['SODA', 'CW']
    resources = ['LUT', 'BRAM', 'FF']

    apps = {}
    for resource in resources:
        apps[resource] = {}
        for app in app_names:
            apps[resource][app] = {}
            for system in systems:
                apps[resource][app][system] = []
    
    for l in lines:
        apps['LUT'][l[0]][l[2]].append(float(l[3]))
        apps['FF'][l[0]][l[2]].append(float(l[5]))
        apps['BRAM'][l[0]][l[2]].append(float(l[6]))

    print(apps)

    NumApps = len(app_names)
    N = len(apps[resource][app]['SODA'])
    fig, ax = plt.subplots(NumApps, NumApps, sharex='col', sharey='row')

    fig.suptitle('Resource Utilization for SODA and Clockwork')
    i = 0
    for resource in resources:
        j = 0
        for app in app_names:
            print('resource = {0}'.format(resource))
            print('app      = {0}'.format(app))
            print(apps[resource])
            print(apps[resource][app])
            assert(apps[resource] != None)
            menMeans = apps[resource][app]['SODA']

            ind = np.arange(N)  # the x locations for the groups
            width = 0.35       # the width of the bars

            # fig = plt.figure()
            # ax[i, j] = fig.add_subplot(111)
            rects1 = ax[i, j].bar(ind, menMeans, width)

            womenMeans= apps[resource][app]['CW']
            rects2 = ax[i, j].bar(ind+width, womenMeans, width)

            # add some
            # ax[i, j].set_ylabel('Counts')
            # ax[i, j].set_title('{0} count for {1} by throughput'.format(resource, app))
            ax[i, j].set_xticks(ind + width / 2)
            ax[i, j].set_xticklabels( ('{0} 1'.format(app), '{0} 2'.format(app), '{0} 4'.format(app)))

            ax[i, j].legend( (rects1[0], rects2[0]), ('SODA', 'CW') )

            
            j += 1
        i += 1

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

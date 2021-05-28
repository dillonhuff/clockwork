import re
import matplotlib.pyplot as plt
import numpy as np

plt.style.use('seaborn-pastel')

font = {'family' : 'normal',
        'weight' : 'bold',
        'size'   : 13}

plt.rc('font', **font)

# f = open('./misc/soda_resource_comparison_table.tex').readlines()
f = open('./misc/multi_rate_standalone.tex').readlines()

def save_plot(name, labels, speedups, use_log=False):
    fig, ax = plt.subplots()
    ax.grid(axis='y')
    ax.set_axisbelow(True)
    x_pos = [i for i, _ in enumerate(labels)]
    bar_colors = []
    for i in range(6):
        bar_colors.append('C0')
    for i in range(6):
        bar_colors.append('C1')
    for i in range(6):
        bar_colors.append('C2')
    barlist = ax.bar(x_pos, speedups, color=bar_colors, edgecolor='k', linewidth=2.0)
    plt.axhline(y=1.0, linewidth=2, color='black', linestyle='--')
    # plt.title(name)
    plt.xlabel("Application and Throughput", font=font)
    plt.ylabel("Improvement vs. HLS Implementation", font=font)
    if use_log:
        ax.set_yscale('log')
    plt.xticks(x_pos, labels)

    scale = 1
    fig.set_size_inches(35*scale, 10*scale)
    plt.show()
    fig.savefig(name, format='eps')

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
            if is_float(values[1]) or values[1].strip() == 'HLS':
                stripped = [element.strip() for element in values]
                lines.append(stripped)
    print(lines)

    last_HLS_runtime = None
    speedups = []
    labels = []

    lut_savings = []
    ff_savings = []
    bram_savings = []
    dsp_savings = []
    for l in lines:
        if l[1] == 'HLS':
            last_HLS_runtime = float(l[7])
            last_HLS_lut = float(l[2])
            last_HLS_ff = float(l[4])
            last_HLS_bram = float(l[5])
            last_HLS_dsp = float(l[6])
        else:
            rt = float(l[7])
            lut = float(l[2])
            ff = float(l[4])
            bram = float(l[5])
            dsp = float(l[6])

            factor_improvement = last_HLS_runtime / rt
            lut_factor_improvement = last_HLS_lut / lut
            ff_factor_improvement = last_HLS_ff / ff 
            bram_factor_improvement = last_HLS_bram / bram 
            dsp_factor_improvement = 1 if dsp == 0 and last_HLS_dsp == 0 else last_HLS_dsp / dsp 

            print('\tHLS    :', last_HLS_runtime)
            print('\tCW     :', rt)
            print('\tSpeedup:', factor_improvement, 'x')
            speedups.append(factor_improvement)
            lut_savings.append(lut_factor_improvement)
            bram_savings.append(bram_factor_improvement)
            ff_savings.append(ff_factor_improvement)
            dsp_savings.append(dsp_factor_improvement)
            labels.append(l[0] + ' ' + l[1])
            print()

    save_plot('clockwork_multi_rate_speedup.eps', labels, speedups)
    save_plot('clockwork_multi_rate_lut.eps', labels, lut_savings)
    save_plot('clockwork_multi_rate_ff.eps', labels, ff_savings)
    save_plot('clockwork_multi_rate_bram.eps', labels, bram_savings)
    save_plot('clockwork_multi_rate_dsp.eps', labels, dsp_savings)
    # x_pos = [i for i, _ in enumerate(labels)]
    # barlist = ax.bar(x_pos, dsp_savings)
    # for i in range(6):
        # barlist[i].set_color('C1')
    # for i in range(6):
        # barlist[6 + i].set_color('C2')
    # plt.xlabel("Application and Throughput")
    # plt.ylabel("DSP use vs. HLS Implementation")
    # plt.title("Clockwork DSP Use vs. HLS Baseline")
    # plt.xticks(x_pos, labels)

    # fig.set_size_inches(16, 10)
    # plt.show()
    # fig.savefig('clockwork_multi_rate_DSP.eps', format='eps')

    # app_names = ['Blur', 'CP', 'Sobel', 'Jacobi']
    # systems = ['SODA', 'CW']
    # resources = ['LUT', 'BRAM', 'FF']

    # apps = {}
    # for resource in resources:
        # apps[resource] = {}
        # for app in app_names:
            # apps[resource][app] = {}
            # for system in systems:
                # apps[resource][app][system] = []
    
    for l in lines:
        print(l)
        # apps['LUT'][l[0]][l[2]].append(float(l[3]))
        # apps['FF'][l[0]][l[2]].append(float(l[5]))
        # apps['BRAM'][l[0]][l[2]].append(float(l[6]))

    # print(apps)
    # # assert(False)

    # NumApps = len(app_names)
    # N = len(apps[resource][app]['SODA'])
    # fig, ax = plt.subplots(N, NumApps, sharex='col', sharey='row')

    # # fig.suptitle('Resource Utilization for SODA and Clockwork (CW)')
    # i = 0
    # for resource in resources:
        # j = 0
        # for app in app_names:
            # print('resource = {0}'.format(resource))
            # print('app      = {0}'.format(app))
            # print(apps[resource])
            # print(apps[resource][app])
            # assert(apps[resource] != None)
            # menMeans = apps[resource][app]['SODA']

            # ind = np.arange(N)  # the x locations for the groups
            # width = 0.35       # the width of the bars

            # # fig = plt.figure()
            # # ax[i, j] = fig.add_subplot(111)
            # rects1 = ax[i, j].bar(ind, menMeans, width)

            # womenMeans= apps[resource][app]['CW']
            # rects2 = ax[i, j].bar(ind+width, womenMeans, width)

            # # add some
            # # ax[i, j].set_ylabel('Counts')
            # # ax[i, j].set_title('{0} count for {1} by throughput'.format(resource, app))
            # ax[i, j].set_xticks(ind + width / 2)
            # ax[i, j].set_xticklabels( ('{0} 1'.format(app), '{0} 16'.format(app), '{0} 32'.format(app)))

            # if i == 0 and j == 0:
                # ax[i, j].legend( (rects1[0], rects2[0]), ('SODA', 'CW') )

            # j += 1
        # i += 1

    # ax.flat[0].set(ylabel='LUT')
    # ax.flat[NumApps].set(ylabel='BRAM')
    # ax.flat[2*NumApps].set(ylabel='FF')
    # # ax.flat[1].set(ylabel='BRAM')
    # # ax.flat[2].set(ylabel='FF')
    # # i = 0
    # # for axi in ax.flat:
        # # print('axi =', i)
        # # axi.set(ylabel='LUT')
        # # i += 1

    # for axi in ax.flat:
        # axi.label_outer()

    # fig.set_size_inches(16, 10)
    # plt.show()
    # fig.savefig('clockwork_soda_bar_charts.eps', format='eps')

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

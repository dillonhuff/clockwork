#!/usr/bin/env python

import re
import numpy as np
import matplotlib.pyplot as plt


tablines = open('us_resources.tex').readlines()

app_resources = {}
for t in tablines:
    strs = t.split("&")
    print strs
    assert(len(strs) == 7)
    app_resources[strs[0]] = strs[1:]

app_percents = {}
for a in app_resources:
    print a, ' -> ', app_resources[a]
    vals = []
    for res in app_resources[a]:
        print '\t', res
        target = '^\s*(\d+)\s*\[\s*(\d+)\.(\d+)\\\%]'
        x = re.match(target, res)
        assert(x)
        pct = x.group(2) + "." + x.group(3)
        print '\tusage =', pct
        vals.append(float(pct))
    app_percents[a] = vals
print 'App percents...'

app_map = {}

for p in app_percents:
    app = p.split("u")[0]
    if not app in app_map:
        app_map[app] = []
    print 'app =', app
    print p, ' -> ', app_percents[p]
    print '\tmax utilization:', max(app_percents[p])
    app_map[app].append(max(app_percents[p]))

print 'Utilizations...'
for app in app_map:
    apps = app_map[app]
    apps.sort()
    print app, apps
    utils = []
    for u in range(0, len(apps)):
        factor = 2**u

        utils.append(2*factor / 4)
    print 'utils =', utils

    # Create data
    x = np.array(utils)
    y = np.array(apps)

    # Plot
    plt.scatter(x, y)
    plt.hlines([100], 0, 10)
    plt.title('Scatter plot pythonspot.com')
    plt.xlabel('Throughput (GB / sec)')
    plt.ylabel('Resource Utilization (%)')
    plt.show()

#!/usr/bin/env python

import re

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



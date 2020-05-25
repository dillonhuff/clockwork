#!/usr/bin/env python

tablines = open('us_resources.tex').readlines()
print('tabllines:')
for t in tablines:
    strs = t.split("&")
    print(strs)
    assert(len(strs) == 7)

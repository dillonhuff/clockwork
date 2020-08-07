#!/usr/bin/python

print('Valid count')

lines = open('pointwise.bs.out.fabric_valid').readlines()
# lines = open('pointwise.bs.out.valid')
# lines = open('pointwise.bs.out')
valids = 0
for l in lines:
    # print(l)
    val = int(l)
    # if (val != 0):
    if (val == 1):
        print (val)
        valids += 1
print('# valids =', valids)

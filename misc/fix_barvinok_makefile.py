#!/usr/bin/env python3

mf = open('Makefile', 'r').read()
fixed = mf.replace("LIBS = -lntl -lgmp", "LIBS = -lpthread -lntl -lgmp")
f = open('Makefile', 'w')
f.write(fixed)

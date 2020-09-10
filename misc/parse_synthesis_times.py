import re
import sys

class Table:

    def __init__(self):
        self.rows = {}

    def __repr__(self):
        st = ""
        for r in self.rows:
            st += '(' + str(r) + ')' + ': ' + self.rows[r]
        return st

    def row_data(self):
        rd = []
        for r in self.rows:
            rd.append(self.rows[r])
        return rd

assert(len(sys.argv) == 2)
table_file = sys.argv[1]
print('Parsing table:', table_file)

f = open(table_file).readlines()

t = Table()
i = 0
for l in f:
    t.rows[i] = l
    i += 1

print('Table...')
print(t)

for r in t.row_data():
    if is_data(r):
        print(r)

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
                print('L=', l)
                values = m[1].split('&')
                values = func(values)
                res += ' & '.join(values) + ' \\\\' + '\n'
            except:
                res += l
        else:
            res += l
    return res

def add_comparison(values):
    rm = "\s*(\d+)\s*"
    m = re.match(rm, values[5])
    if m:
        print('\t\tMATCHED')
        v = values
        values[0] = "noooo"
    return values

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

res = table_op(f, add_comparison)
print(res)


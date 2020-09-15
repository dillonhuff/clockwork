import re
import sys
import copy

def average(lst):
    return sum(lst) / len(lst)

def intersperse(lst, item):
    result = [item] * (len(lst) * 2 - 1)
    result[0::2] = lst
    return result

def line_text(row_entries):
    return ' & '.join(row_entries) + ' \\\\' + '\n'

def is_float(s):
    try:
        float(s)
        return True
    except ValueError:
        return False

def entries(row):
    rm = "(.*)\\\\\\\\"
    return re.match(rm, row.txt)

class TableRow:

    def __init__(self, r, container, txt):
        self.r = r
        self.container = container
        self.txt = txt

    def __repr__(self):
        return self.txt

    def row(self, offset):
        return self.container.rows[self.r + offset]

class Table:

    def __init__(self):
        self.rows = {}

    def __repr__(self):
        st = ""
        for r in self.rows:
            st += str(self.rows[r])
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
    t.rows[i] = TableRow(i, t, l)
    i += 1

print('Table...')
print(t)

lut_reductions = []
bram_reductions = []
ff_reductions = []

modified = Table()
fi = 0

def add_pct_change(r):
    if 'CW' in r.txt.split('&')[2]:
        vals = entries(r)[1].split('&')
        print('CW:', r)
        prior = r.row(-1)
        print('\tprior:', prior)
        prior_ents = entries(prior)
        assert(prior_ents)
        prior_vals = prior_ents[1].split('&')
        assert(len(prior_vals) == len(vals))

        new_entries = []
        for i in range(len(prior_vals)):
            pr = prior_vals[i]
            c  = vals[i]

            pct_change_str = ''
            if i > 1 and is_float(pr):
                assert(is_float(c))

                psoda = float(pr)
                pcw = float(c)

                if psoda == 0.0:
                    pct_change_str = '(-)'
                else:
                    pct_change = ((pcw - psoda) / psoda * 100.0)
                    pct_change_str = '(' + ('%.0f' % pct_change) + ')'
                    if i == 3:
                        lut_reductions.append(pct_change)
                    if i == 5:
                        ff_reductions.append(pct_change)
                    if i == 6:
                        bram_reductions.append(pct_change)

            new_entries.append(c + ' ' + pct_change_str)
        print('\t', new_entries)
        return line_text(new_entries)
    else:
        return r.txt

def swap_vitis_times(r):
    vals = entries(r)[1].split('&')
    assert(len(vals) == 14)
    vcpy = copy.deepcopy(vals)
    vcpy[0:8] = vals[0:8]
    vcpy[9] = vals[10]
    vcpy[10] = vals[11]
    vcpy[11] = vals[12]
    vcpy[12] = vals[9]
    vcpy[13] = vals[13]

    if is_float(vcpy[11]) and is_float(vcpy[12]) and is_float(vcpy[10]) and is_float(vcpy[8]):
        total = float(vcpy[11]) + float(vcpy[10]) + float(vcpy[9]) + float(vcpy[8])
        vcpy[12] = '%.0f' % (total)
        vcpy[13] = '%.3f' % ((float(vcpy[8]) / total) * 100)
    return line_text(vcpy)

def fuse_synthesis_and_pnr(r):
    vals = entries(r)[1].split('&')
    assert(len(vals) == 14)
    vcpy = copy.deepcopy(vals)

    synth = vals[10]
    pnr = vals[11]
    print('synth:', synth)
    print('pnr  :', pnr)

    if is_float(synth) and is_float(pnr):
        vcpy[10] = '%.0f' % (float(synth) + float(pnr))
    else:
        vcpy[10] = synth + pnr
    vcpy[11] = vals[12]
    vcpy[12] = vals[13]
    vcpy = vcpy[:-1]

    print('len vcpy:', len(vcpy))
    print('len vals:', len(vals))
    assert(len(vcpy) + 1 == len(vals))

    return line_text(vcpy)

for r in t.row_data():
    if entries(r):
        new_row = fuse_synthesis_and_pnr(r)
        modified.rows[fi] = TableRow(fi, modified, new_row)
    else:
        modified.rows[fi] = TableRow(fi, modified, r.txt)
    fi += 1

print('Modified table...')
print(modified)

# print('LUT reductions:', lut_reductions)
# print('LUT avg reduction:', average(lut_reductions))

# print('FF reductions:', ff_reductions)
# print('FF avg reduction:', average(ff_reductions))

# print('BRAM reductions:', bram_reductions)
# print('BRAM avg reduction:', average(bram_reductions))


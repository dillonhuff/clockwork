import re
import sys

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

for r in t.row_data():
    if entries(r):
        new_row = add_pct_change(r)
        modified.rows[fi] = TableRow(fi, modified, new_row)
        # if 'CW' in r.txt.split('&')[2]:
            # vals = entries(r)[1].split('&')
            # print('CW:', r)
            # prior = r.row(-1)
            # print('\tprior:', prior)
            # prior_ents = entries(prior)
            # assert(prior_ents)
            # prior_vals = prior_ents[1].split('&')
            # assert(len(prior_vals) == len(vals))

            # new_entries = []
            # for i in range(len(prior_vals)):
                # pr = prior_vals[i]
                # c  = vals[i]

                # pct_change_str = ''
                # if i > 1 and is_float(pr):
                    # assert(is_float(c))

                    # psoda = float(pr)
                    # pcw = float(c)

                    # if psoda == 0.0:
                        # pct_change_str = '(-)'
                    # else:
                        # pct_change = ((pcw - psoda) / psoda * 100.0)
                        # pct_change_str = '(' + ('%.0f' % pct_change) + ')'
                        # if i == 3:
                            # lut_reductions.append(pct_change)
                        # if i == 5:
                            # ff_reductions.append(pct_change)
                        # if i == 6:
                            # bram_reductions.append(pct_change)

                # new_entries.append(c + ' ' + pct_change_str)
            # print('\t', new_entries)
            # modified.rows[fi] = TableRow(fi, modified, line_text(new_entries))
        # else:
            # modified.rows[fi] = TableRow(fi, modified, r.txt)
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


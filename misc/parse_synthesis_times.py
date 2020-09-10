import re
import sys

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
            st += '(' + str(r) + ')' + ': ' + str(self.rows[r])
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

modified = Table()
fi = 0
for r in t.row_data():
    if entries(r):
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

                new_entries.append(c + ' ' + pct_change_str)
            print('\t', new_entries)
            modified.rows[fi] = TableRow(fi, modified, line_text(new_entries))
        else:
            modified.rows[fi] = TableRow(fi, modified, r.txt)
    else:
        modified.rows[fi] = TableRow(fi, modified, r.txt)
    fi += 1

print('Modified table...')
print(modified)




# def table_op(table_lines, func):
    # res = ''
    # for l in table_lines:
        # rm = "(.*)\\\\\\\\"
        # m = re.match(rm, l)
        # if m:
            # try:
                # print('L=', l)
                # values = m[1].split('&')
                # values = func(values)
                # res += ' & '.join(values) + ' \\\\' + '\n'
            # except:
                # res += l
        # else:
            # res += l
    # return res

# def add_comparison(values):
    # rm = "\s*(\d+)\s*"
    # m = re.match(rm, values[5])
    # if m:
        # print('\t\tMATCHED')
        # v = values
        # values[0] = "noooo"
    # return values

# def sum_double_entry(values):
    # rm = "\s*(\d+)\s+(\d+)\s*"
    # m = re.match(rm, values[5])
    # if m:
        # v = values
        # values[5] = str(float(m[1]) + float(m[2]))
    # return values

# def entry_to_int(values):
    # # print(values)
    # try:
        # values[5] = int(float(values[5]))
    # except:
        # return values
    # return values

# res = table_op(f, add_comparison)
# print(res)


import re
import statistics

f = open('./misc/soda_comparison_standalone_large.tex').readlines()

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
    # res = ''
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            print(l)
            print(m[0])
            values = [e.strip() for e in m[1].split('&')]
            if is_float(values[1]):
                # values = func(values)
                # res += ' & '.join(values) + ' \\\\' + '\n'
                lines.append(values)
    return lines 

def sum_double_entry(values):
    rm = "\s*(\d+)\s+(\d+)\s*"
    m = re.match(rm, values[5])
    if m:
        v = values
        values[5] = str(float(m[1]) + float(m[2]))
    return values

def entry_to_int(values):
    try:
        values[5] = int(float(values[5]))
    except:
        return values
    return values

res = table_op(f, sum_double_entry)

print(res)

assert(len(res) % 2 == 0)
assert(len(res) == 4*2*3)

lut_reductions_1 = []
ff_reductions_1 = []
bram_reductions_1 = []

lut_reductions_32 = []
bram_reductions_32 = []
ff_reductions_32 = []

lut_reductions = []
bram_reductions = []
ff_reductions = []
i = 0
while i < len(res):
    soda_res = res[i]
    cw_res = res[i + 1]

    assert(soda_res[0] == cw_res[0])

    assert(soda_res[2] == 'SODA')
    assert(cw_res[2] == 'CW')

    soda_luts = float(soda_res[3])
    cw_luts = float(cw_res[3])

    pct_reduction = 100.0 * ((soda_luts - cw_luts) / soda_luts)
    lut_reductions.append(pct_reduction)
    if soda_res[1] == '32':
        lut_reductions_32.append(pct_reduction)
    if soda_res[1] == '1':
        lut_reductions_1.append(pct_reduction)

    print('SODA LUTs    :', soda_luts)
    print('CW LUTs      :', cw_luts)
    print('PCT Reduction:', pct_reduction)
    print()

    soda_brams = float(soda_res[6])
    cw_brams = float(cw_res[6])

    pct_reduction = 100.0 * ((soda_brams - cw_brams) / soda_brams)
    bram_reductions.append(pct_reduction)
    if soda_res[1] == '32':
        bram_reductions_32.append(pct_reduction)
    if soda_res[1] == '1':
        bram_reductions_1.append(pct_reduction)

    print('SODA BRAMs:', soda_brams)
    print('CW BRAMs  :', cw_brams)
    print('PCT Reduction:', pct_reduction)
    print()

    soda_ffs = float(soda_res[5])
    cw_ffs = float(cw_res[5])

    pct_reduction = 100.0 * ((soda_ffs - cw_ffs) / soda_ffs)
    ff_reductions.append(pct_reduction)
    if soda_res[1] == '32':
        ff_reductions_32.append(pct_reduction)
    if soda_res[1] == '1':
        ff_reductions_1.append(pct_reduction)

    print('SODA FFs  :', soda_ffs)
    print('CW FFs    :', cw_ffs)
    print('PCT Reduction:', pct_reduction)
    print()
    i += 2

print()
print('Average LUT reduction :', statistics.mean(lut_reductions))
print('Average FF reduction:', statistics.mean(ff_reductions))
print('Average BRAM reduction:', statistics.mean(bram_reductions))
print()

assert(len(lut_reductions_1) == 4)
assert(len(ff_reductions_1) == 4)
assert(len(bram_reductions_1) == 4)

assert(len(lut_reductions_32) == 4)
assert(len(ff_reductions_32) == 4)
assert(len(bram_reductions_32) == 4)

print('Average LUT reduction 1pix / cycle:', statistics.mean(lut_reductions_1))
print('Average bram reduction 1pix / cycle:', statistics.mean(bram_reductions_1))
print('Average FF reduction 1pix / cycle:', statistics.mean(ff_reductions_1))
print()
print('Average LUT reduction 32pix / cycle:', statistics.mean(lut_reductions_32))
print('Average bram reduction 32pix / cycle:', statistics.mean(bram_reductions_32))
print('Average FF reduction 32pix / cycle:', statistics.mean(ff_reductions_32))
print()

# print('Geomean LUT reduction :', statistics.geometric_mean(lut_reductions))
# print('Geomean FF reduction:', statistics.geometric_mean(ff_reductions))
# print('Geomean BRAM reduction:', statistics.geometric_mean(bram_reductions))
# print('Done')

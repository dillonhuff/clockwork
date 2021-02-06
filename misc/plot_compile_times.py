import matplotlib.pyplot as plt

plt.style.use('seaborn-pastel')

def set_size(w,h, ax=None):
    """ w, h: width, height in inches """
    if not ax: ax=plt.gca()
    l = ax.figure.subplotpars.left
    r = ax.figure.subplotpars.right
    t = ax.figure.subplotpars.top
    b = ax.figure.subplotpars.bottom
    figw = float(w)/(r-l)
    figh = float(h)/(t-b)
    ax.figure.set_size_inches(figw, figh)

data = """0.244 & 5872 &
0.263 & 6054 &
0.501 &  6098 &
1.08 & 6064  &
1.56 & 6333 &
8.04 &6451 &
 1.56 & 6140 &
 1.54 & 6101 &
 1.89 & 6345 &
 3.09 & 6342 &
 6.55 & 6339 &
 17.9 & 6683 &
 100 & 6611 &
 107 & 6397 & 
 108 & 6865 &
 132 & 8521 &
 192 & 15042 &
 367 & 44126"""

values = data.split("&")
print('values =', values)
assert(len(values) % 2 == 0)

cw_times = []
hls_pnr_times = []
for v in range(len(values)):
    if v % 2 == 0:
        cw_times.append(float(values[v]))
    else:
        hls_pnr_times.append(float(values[v]))

assert(len(cw_times) == len(hls_pnr_times))

labels = []
for v in range(6):
    p = 2**v
    labels.append('MP' + str(p))
for v in range(6):
    p = 2**v
    labels.append('GP' + str(p))
for v in range(6):
    p = 2**v
    labels.append('SEF' + str(p))

print('len labels:', len(labels))
print('len cw    :', len(cw_times))
assert(len(labels) == len(cw_times))

# for v in range(len(values) // 2):
    # labels.append('l' + str(v))
# ['G1', 'G2', 'G3', 'G4', 'G5']

# cw_times = [20, 35, 30, 35, 27]
# hls_pnr_times = [25, 32, 34, 20, 25]

width = 0.5       # the width of the bars: can also be len(x) sequence

fig, ax = plt.subplots()

ax.bar(labels, hls_pnr_times, width, edgecolor='black',
       linewidth=2.0, label='HLS+PnR Time')
# ax.bar(labels, cw_times, width, bottom=hls_pnr_times, label='CW')

ax.set_ylabel('Total Compile Time (sec)')
plt.setp(ax.get_xticklabels(), rotation=45, horizontalalignment='right')

# ax.set_title('Scores by group and gender')
# plt.yscale("log")
ax.legend()

# set_size(5, 5)

fig.set_size_inches(16, 10)
plt.show()
fig.savefig('clockwork_compile_times.eps', format='eps')

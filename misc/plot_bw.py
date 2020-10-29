from matplotlib import pyplot as plt
import numpy as np
from cycler import cycler

# Create cycler object. Use any styling from above you please
# monochrome = (cycler('color', ['k']) * cycler('linestyle', ['-', ':', '--', '=.']) * cycler('marker', ['^',',', '.']))
monochrome = (cycler('color', ['k']) * (cycler('linestyle', ['-', ':', '--', '=.']) + cycler('marker', ['^','o', '.', ','])))

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

fig, ax = plt.subplots(1,1,figsize=(6, 4))
ax.set_prop_cycle(monochrome)
ax.grid()
ax.spines['top'].set_visible(False)
ax.spines['right'].set_visible(False)
ax.spines['bottom'].set_visible(False)
ax.spines['left'].set_visible(False)

actual_bw = [0.88, 1.58, 3.06, 5.56, 11.2, 25.6]
theoretical_peak_bw = [1, 2, 4, 8, 16, 30.72]

requested_throughputs = [1, 2, 4, 8, 16, 32]

plt.plot(requested_throughputs, actual_bw, label='measured')
plt.plot(requested_throughputs, theoretical_peak_bw, label='ideal')
# plt.axhline(32, linewidth='2', color='black', linestyle='-.', label='PCIe peak bandwidth')

# plt.plot(requested_throughputs, actual_bw, label='measured', marker='s')
# plt.plot(requested_throughputs, theoretical_peak_bw, label='expected', marker='o')
# plt.axhline(32, linewidth='2', color='red', label='PCIe peak bandwidth')

plt.ylabel('Bandwidth (GB/sec)')
plt.xlabel('Requested Throughput (pix/cycle)')
# set_size(5, 3)

plt.legend()
plt.show()
 
fig.savefig('clockwork_bw_theoretical_peak.eps', format='eps')

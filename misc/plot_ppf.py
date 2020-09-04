import matplotlib
import matplotlib.pyplot as plt
import numpy as np
patterns = [ "|" , "\\" , "/" , "+" , "-", ".", "*","x", "o", "O" ]

def autolabel(rects):
    """Attach a text label above each bar in *rects*, displaying its height."""
    for rect in rects:
        height = rect.get_height()
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(1, 1),  # 3 points vertical offset
                    textcoords="offset points",
                    ha='center', va='bottom')


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

# matplotlib.style.use('seaborn-pastel')
# matplotlib.style.use('tableau-colorblind10')

labels = ['MP', 'GP', 'SEF']
men_means = [0.782, 0.78, 0.53]
# women_means = [0.01, 0.0639, 0.00157]
cpu_ppf = [0.01, 0.064, 0.0016]
gpu_ppf = [2.24, 1.61, 0.22]
k80_ppf = [1.61, 0.298, 0.0285]
theoretical_peak = [1.14, 1.14, 1.14]

x = np.arange(len(labels))  # the label locations
width = 1.0
margin = 0.1
inter_group_margin = 0.05
# bar_width = (width - margin - 2*inter_group_margin)/4.0
bar_width = (width - margin)/4.0

categories = [men_means, gpu_ppf, k80_ppf, cpu_ppf]
labels = ['CW', 'V100 GPU', 'K80 GPU', 'CPU']

use_offset = len(categories) % 2 == 1

fig, ax = plt.subplots()
offset = bar_width / 2.0 if use_offset else 0.0

pos = -bar_width - offset
rects = []
for i in range(len(categories)):
    rects.append(ax.bar(x - pos, categories[i], bar_width, label=labels[i], edgecolor='black'))
    pos += bar_width

# rects1 = ax.bar(x - bar_width - bar_width/2.0, men_means, bar_width, label='CW', edgecolor='black')
# rects3 = ax.bar(x - 0         - bar_width/2.0, gpu_ppf, bar_width, label='V100 GPU', edgecolor='black')
# rects2 = ax.bar(x + bar_width - bar_width/2.0, women_means, bar_width, label='CPU', edgecolor='black')
# rects4 = ax.bar(x + 2*bar_width - bar_width/2.0, k80_ppf, bar_width, label='K80 GPU', edgecolor='black')

THEORETICAL_PEAK = 1.14
plt.axhline(y=THEORETICAL_PEAK, linewidth=2, color='red')

# Add some text for labels, title and custom x-axis tick labels, etc.
ax.set_ylabel('GPix / J')
# ax.set_title('Scores by group and gender')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()

plt.yscale("log")

for c in rects:
    autolabel(c)
# autolabel(rects1)
# autolabel(rects2)
# autolabel(rects3)
# autolabel(rects4)

# fig.tight_layout()
# set_size(5, 3)

plt.show()
fig.savefig('clockwork_cpu_theoretical_peak_ppf.eps', format='eps')

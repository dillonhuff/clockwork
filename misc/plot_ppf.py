import matplotlib
import matplotlib.pyplot as plt
import numpy as np

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

matplotlib.style.use('seaborn-pastel')
# matplotlib.style.use('tableau-colorblind10')

labels = ['MP', 'GP', 'SEF']
men_means = [0.782, 0.78, 0.53]
women_means = [0.01, 0.0639, 0.00157]
gpu_ppf = [2.24, 1.61, 0.22]
theoretical_peak = [1.14, 1.14, 1.14]

x = np.arange(len(labels))  # the label locations
width = 1.0
margin = 0.1
bar_width = (width - margin)/3.0
# - 0.15

fig, ax = plt.subplots()
rects1 = ax.bar(x - bar_width, men_means, bar_width, label='CW', edgecolor='black')
rects2 = ax.bar(x, women_means, bar_width, label='CPU', edgecolor='black')
rects3 = ax.bar(x + bar_width, gpu_ppf, bar_width, label='GPU', edgecolor='black')

THEORETICAL_PEAK = 1.14
plt.axhline(y=THEORETICAL_PEAK, linewidth=2, color='red')

# Add some text for labels, title and custom x-axis tick labels, etc.
ax.set_ylabel('GPix / J')
# ax.set_title('Scores by group and gender')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()

plt.yscale("log")

def autolabel(rects):
    """Attach a text label above each bar in *rects*, displaying its height."""
    for rect in rects:
        height = rect.get_height()
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),  # 3 points vertical offset
                    textcoords="offset points",
                    ha='center', va='bottom')


autolabel(rects1)
autolabel(rects2)
autolabel(rects3)

# fig.tight_layout()
# set_size(5, 3)

plt.show()
fig.savefig('clockwork_cpu_theoretical_peak_ppf.eps', format='eps')

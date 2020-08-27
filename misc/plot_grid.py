import matplotlib.pyplot as plt
plt.style.use('seaborn-white')
import numpy as np

fig = plt.figure()
fig.subplots_adjust(hspace=1.0, wspace=0.4)

resources = ['BRAM', 'DSP', 'LUT', 'FF', 'Execution Time']
for i in range(1, 6):
    ax = fig.add_subplot(5, 1, i)
    ax.bar([0.3, 1.0], [1, i], [0.5, 0.5], edgecolor='black')
    ax.set_ylabel(resources[i - 1])

    labels = ['MP', 'GP', 'SEF']

    x = np.arange(len(labels)) + 0.4 # the label locations

    # Add some text for labels, title and custom x-axis tick labels, etc.
    ax.set_ylabel('Scores')
    ax.set_xticks(x)
    ax.set_xticklabels(labels)

    # ax.text(0.5, 0.5, str((2, 3, i)),
           # fontsize=18, ha='left')


# for i in range(5):
    # ax = fig.add_subplot(5, 1, i)
    # , sharex='col', sharey='row')

plt.show()

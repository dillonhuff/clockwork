import os
import re

from pathlib import Path


directory_in_str = './soda_codes/'

pathlist = Path(directory_in_str).glob('**/*_count_fifos.cpp')
depths = []
for path in pathlist:
     path_in_str = str(path)
     print(path_in_str)
     for l in open(path_in_str, 'r').readlines():
         r = "(.*)depth=(\d+)(.*)"
         m = re.match(r, l)
         if m:
             depths.append(int(m[2]))
             print(l)

for d in depths:
    print(d)
         # print(l)

# print('directory', directory)

# for filename in os.listdir(directory):
    # print(filename)
    # if filename.endswith(".cpp"):
        # print(os.path.join(directory, filename))
        # continue
    # else:
        # continue

import matplotlib.pyplot as plt
import numpy as np
from matplotlib import colors
from matplotlib.ticker import PercentFormatter

plt.style.use('seaborn-pastel')

# Fixing random state for reproducibility
# np.random.seed(19680801)

# N_points = 10000
n_bins = 80

x = depths

# Generate a normal distribution, center at x=0 and y=5
# x = np.random.randn(N_points)
# y = .4 * x + np.random.randn(N_points) + 5

fig, axs = plt.subplots(1, 1, sharey=True, tight_layout=True)

# We can set the number of bins with the `bins` kwarg
axs.hist(x, bins=n_bins, linewidth=2.0, edgecolor='black')
# axs[1].hist(y, bins=n_bins)

plt.show()
fig.savefig('clockwork_fifo_sizes.eps', format='eps')

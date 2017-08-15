import numpy as np
import time
from numba import jit

@jit
def quad(x0, n):
    x = x0
    for i in range(1, n):
        x = 4.0 * x * (1.0 - x)
    return x

x = quad(0.2, 10)

n = 10_000_000

t = time.time()
x = quad(0.2, n)
elapsed = time.time() - t

print("last val = {}".format(x))
print("elapsed time = {}".format(elapsed))

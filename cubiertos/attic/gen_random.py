import sys
import random

random.seed(hash(str(sys.argv)))

cond1 = sys.argv[2] == '1'
cond2 = sys.argv[3] == '1'

T = random.choice(range(1000))

if cond1:
    C = T + 1
else:
    C = random.choice(range(1000))


if cond2:
    RT = RC = PT = PC = random.choice(range(1000))
else:
    RT = random.choice(range(1000))
    PT = random.choice(range(1000))
    PC = random.choice(range(1000))
    RC = random.choice(range(1000))

print(T, PT, RT)
print(C, PC, RC)

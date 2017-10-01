import random
import sys

random.seed(hash(str(sys.argv)))

n = int(sys.argv[1])
maxX = int(sys.argv[2])
maxY = int(sys.argv[3])

print(n)

for _ in range(n):
    x = str(random.randint(-maxX, maxX))
    y = str(random.randint(-maxX, maxX))
    print(x + " " + y)


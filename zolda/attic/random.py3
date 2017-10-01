import random
import sys

random.seed(hash(str(sys.argv)))

n = int(sys.argv[2])
k = int(sys.argv[3])
minX = int(sys.argv[4])
maxX = int(sys.argv[5])
minY = int(sys.argv[6])
maxY = int(sys.argv[7])

print(n)

for _ in range(n):
    x = random.randint(minX, maxX)
    y = random.randint(minY, maxY)
    flipX = random.randint(0, 1)
    flipY = random.randint(0, 1)
    if flipX == 1:
        x *= -1
    if flipY == 1:
        y *= -1
    print(str(x) + " " + str(y))


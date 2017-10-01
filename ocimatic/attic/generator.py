import sys
import random


random.seed(hash(sys.argv[1]))

exacto = int(sys.argv[2])
max_espera = long(sys.argv[3])
dias_inicio = int(sys.argv[4])

if exacto == 0:
  print(max_espera, dias_inicio)
else
  print((random.getrandbits(128) % max_espera) + 1, random.randint(1, dias_inicio))

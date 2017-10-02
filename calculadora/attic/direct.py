import random
import sys

random.seed(hash(str(sys.argv)))
autoreflex = [0, 1, 2, 5, 8]
mappable = [0, 1, 2, 5, 6, 8, 9]
d = {0:0, 1:1, 2:2, 5:5, 6:9, 8:8, 9:6, 0:0}

def mapp(arr, m):
	ans = []
	for el in arr:
		ans.append(m[el])
	return ans

def gen_arr(n, alphabet = [0,1,2,3,4,5,6,7,8,9]):
	ans = []
	for i in range(n):
		ans.append(random.choice(alphabet))
	return ans

def inv(arr):
	dum_cpy = []
	for el in arr: dum_cpy.append(el)
	dum_cpy.reverse()
	return dum_cpy

def print_arr(arr):
	ans = ""
	ans += str(arr[0])
	for el in arr[1:]:
		ans += " " + str(el)
	print(ans)

def invertible(arr):
	ans = True
	for i in range(len(arr)):
		if (not arr[i] in d) or (d[arr[i]] != arr[len(arr)-1-i]):
			ans = False
			break
	return ans


n_min = int(sys.argv[2])
n_max = int(sys.argv[3])
answer = int(sys.argv[4])
print(n_min)
print(n_max)
print(answer)

n = random.randint(n_min, n_max)

print(n)

if answer == 1:
	half_arr = gen_arr(n//2, mappable)
	median = []
	if n % 2 == 1:
		median.append(random.choice(autoreflex))
	total_arr = half_arr + median  + mapp(inv(half_arr), d)
	print_arr(total_arr)
else:
	loop = True
	while loop:
		total_arr = gen_arr(n)
		if not invertible(total_arr):
			loop = False
	print_arr(total_arr)

import random

def gen_arr(n):
	ans = []
	for i in range(n):
		ans.append(random.randint(0,9))
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
		ans += " " + str(arr)
	print(ans)

def invertible(arr):
	ans = True
	d = {0:0, 1:1, 2:2, 5:5, 6:9, 8:8, 9:6, 0:0}
	for i in range(len(arr)):
		if arr[i] not in d or (arr[i] != d[arr[len(arr)-1-i]):
			ans = False
			break
	return ans

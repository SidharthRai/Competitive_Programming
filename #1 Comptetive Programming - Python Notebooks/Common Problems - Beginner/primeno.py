import math 

num = 35

for i in range(2, int(math.sqrt(num)) + 1):
	if num % i == 0:
		print("NP")
		break
	print("P")
	break
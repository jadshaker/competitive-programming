t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	a = input().split()
	even = 0
	odd = 0
	for i in a:
		if int(i) % 2 == 0:
			even += 1
		else:
			odd += 1
	if (even and odd) or odd % 2:
		print('YES')
		continue
	print('NO')

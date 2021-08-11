t = int(input())
while t > 0:
	t-= 1
	n = int(input())
	i = 9
	if n == 1:
		print(9)
	elif n == 2:
		print(98)
	elif n == 3:
		print(989)
	else:
		print(989, end = '')
		n -= 3
		i = 0
		while n > 0:
			print(i, end = '')
			i += 1
			n -= 1
			if i == 10:
				i = 0
		print()

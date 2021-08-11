t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	count = 0
	while True:
		if n == 1:
			break
		elif n % 6 == 0:
			n /= 6
			count += 1
		elif n % 3 == 0:
			n *= 2
			count += 1
		else:
			count = -1
			break
	print(count)

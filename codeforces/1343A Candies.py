t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	# x * (2 ^ k - 1) = n
	i = 2
	while True:
		if n % (2 ** i - 1):
			i += 1
		else:
			print(int(n / (2 ** i - 1)))
			break

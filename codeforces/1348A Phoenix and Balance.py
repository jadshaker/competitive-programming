t = int(input())
while t > 0:
	n = int(input())
	a = 2 ** n
	b = 2 ** (n - 1)
	for i in range(1, int(n / 2)):
		a += 2 ** i
		b += 2 ** (n - i - 1)
	print(a - b)
	t += -1
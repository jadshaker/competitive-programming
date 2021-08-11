t = int(input())
while t > 0:
	n = int(input())
	print(n, end = ' ')
	for i in range(1, n):
		print(i, end = ' ')
	print()
	t += -1

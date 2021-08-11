t = int(input())
while t > 0:
	n = int(input())
	x = [False] * n
	p = input().split()
	for i in range(0, n * 2):
		if x[int(p[i]) - 1] == False:
			x[int(p[i]) - 1] = True
			print(int(p[i]), end = ' ')
		else:
			pass
	print()
	t += -1
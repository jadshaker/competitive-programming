t = int(input())
while t > 0:
	x = input().split()
	c = min(int(x[0]), int(x[1]))
	l = max(int(x[0]), int(x[1]))
	w = c
	if l > 2 * w:
		print(l ** 2)
	else:
		print((2 * w) ** 2)
	t += -1

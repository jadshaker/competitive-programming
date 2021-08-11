t = int(input())
while t > 0:
	t -= 1
	r = input().split()
	l = int(r[0])
	r = int(r[1])
	if 2 * l > r:
		print(-1, -1)
	else:
		print(l, 2 * l)

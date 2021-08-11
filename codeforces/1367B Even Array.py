t = int(input())
while t > 0:
	n = int(input())
	a = input().split()
	e = 0
	o = 0
	for i in range(0, n):
		if int(a[i]) % 2 != i % 2:
			if i % 2 == 0:
				e += 1
			else:
				o += 1
	if e == o:
		print(e)
	else:
		print(-1)
	t += -1

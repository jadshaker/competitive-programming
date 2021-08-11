t = int(input())
while t > 0:
	m = input().split()
	n = int(m[0])
	m = int(m[1])
	if n % 2 == 0:
		print(int(n / 2) * m)
	else:
		print(int(n / 2) * m + int((m + 1) / 2))
	t += -1
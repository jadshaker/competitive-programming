t = int(input())
while t > 0:
	n = input().split()
	a = int(n[0])
	b = int(n[1])
	c = int(n[2])
	n = int(n[3])
	k = max(a, b, c) * 3 - a - b - c
	if k <= n and (n - k) % 3 == 0:
		print('YES')
	else:
		print('NO')
	t += -1

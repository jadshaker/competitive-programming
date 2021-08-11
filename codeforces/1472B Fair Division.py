t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	a = input().split()
	s = 0
	c = [0, 0, 0]
	for i in range(0, n):
		if a[i] == '1':
			c[1] += 1
		else:
			c[2] += 1
	if (c[1] + c[2] * 2) % 2:
		print('NO')
		continue
	s = (c[1] + c[2] * 2) / 2
	if s % 2 == 0 or (s % 2 and c[1]):
		print('YES')
		continue
	print('NO')

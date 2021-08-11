t = int(input())
while t > 0:
	t -= 1
	m = input().split()
	x = int(m[0])
	n = int(m[1])
	m = int(m[2])
	while x > 20 and n > 0:
		n -= 1
		x = int(x / 2) + 10
	while m > 0:
		m -= 1
		x -= 10
	if x > 0:
		print('NO')
	else:
		print('YES')

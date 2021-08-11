t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	count = 1
	while n > 2020:
		n -= 2020
		count += 1
	if n in range(0, count) or n == 2020 or n == 2021:
		print('YES')
	else:
		print('NO')
